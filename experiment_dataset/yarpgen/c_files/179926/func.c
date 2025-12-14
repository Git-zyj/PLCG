/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179926
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) + ((+(((/* implicit */int) arr_1 [11U] [i_0]))))))) + ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (var_13)))))));
        arr_2 [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) (!((_Bool)1)))))) >= ((-(((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((var_13) - (5370151526548774674ULL)))))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~((+(((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) (((-((-(((/* implicit */int) (_Bool)1)))))) + ((-(((((/* implicit */int) arr_0 [13U] [i_1])) - (((/* implicit */int) var_18))))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~((~(((var_5) & (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 13; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    var_23 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_3])))))))));
                    arr_13 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))));
                    arr_14 [i_2 - 1] [i_3] [i_4] [i_4] = (!(((/* implicit */_Bool) (((+(((/* implicit */int) arr_11 [i_2] [i_2] [i_2])))) + ((+(((/* implicit */int) (_Bool)1))))))));
                }
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) (((-(((/* implicit */int) arr_6 [i_3])))) * (((/* implicit */int) (!(var_1))))))))))));
                arr_15 [i_3] = ((/* implicit */unsigned char) (((-(((((/* implicit */int) arr_12 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_3])) - (((/* implicit */int) (_Bool)1)))))) + ((((+(((/* implicit */int) (_Bool)1)))) - (((((/* implicit */int) arr_9 [i_3] [i_2])) - (((/* implicit */int) (_Bool)1))))))));
                var_25 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_16)) || ((_Bool)1)))) ^ (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_8 [i_2] [(short)1] [10U]))))))) / (((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_11 [(unsigned char)6] [i_2 - 2] [(unsigned char)6])))) | (((/* implicit */int) (!(var_14))))))));
            }
        } 
    } 
    var_26 = (-((((-(var_13))) << (((((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) - (564950642288993943ULL))))));
    var_27 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))))) + ((((~(var_15))) << (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_11))))))));
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_11))))))) != ((-((+(((/* implicit */int) (_Bool)1))))))));
}
