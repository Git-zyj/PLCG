/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178440
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
    var_13 = ((/* implicit */_Bool) var_10);
    var_14 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_0)), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)39298)))) : (var_8))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_15 = (+(((/* implicit */int) (_Bool)0)));
                            var_16 = ((/* implicit */long long int) arr_1 [i_1 + 2] [6]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) arr_5 [i_0]);
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    var_18 = ((/* implicit */long long int) ((max((arr_4 [i_0] [i_1 + 2]), (((/* implicit */unsigned int) var_2)))) / (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)239), ((unsigned char)231)))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((((/* implicit */int) arr_7 [i_4])) <= (((/* implicit */int) arr_0 [i_4] [i_1 + 2])))), (arr_6 [i_1 + 1])))) > (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned short)49152)), (arr_9 [i_1] [i_1 - 1] [(unsigned short)5] [(unsigned short)5]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))))))));
                    var_20 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) <= (min((1048572U), (((/* implicit */unsigned int) var_5)))))));
                    var_21 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((1811064509), (((/* implicit */int) (signed char)-51))))))))) + (min((arr_4 [i_1 - 1] [i_1 + 2]), (arr_4 [i_1 + 2] [i_1 + 2])))));
                    var_22 ^= max((arr_11 [i_4] [i_1] [(_Bool)1] [i_0]), (((/* implicit */long long int) max((min((((/* implicit */unsigned char) var_2)), (arr_7 [(signed char)8]))), (((/* implicit */unsigned char) var_2))))));
                }
                arr_12 [i_0] = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
