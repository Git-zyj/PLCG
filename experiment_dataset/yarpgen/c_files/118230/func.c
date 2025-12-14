/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118230
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_5))));
    var_19 = ((/* implicit */short) ((long long int) var_7));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)64587)) ? (var_12) : (((/* implicit */long long int) 1637311774))));
                    arr_9 [i_0] [(_Bool)1] [i_0] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) 743919116))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_9)))), (((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(signed char)3]))) & (var_3))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) / (max((arr_3 [i_0] [i_0 + 1] [i_0]), (((/* implicit */long long int) -1637311797)))))))));
                    var_22 &= ((/* implicit */_Bool) (~((~(370304613)))));
                    var_23 = ((/* implicit */unsigned short) (~((~(arr_4 [13U])))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (var_4)))) + (var_8))))));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    var_25 = ((/* implicit */signed char) (-(-1637311775)));
                    var_26 = (-(var_8));
                    var_27 = ((/* implicit */signed char) arr_0 [i_0 - 3]);
                }
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((arr_7 [0U] [(unsigned short)6]) + (arr_13 [0ULL] [(short)1] [i_0] [i_0])))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_0 + 1])), (429357473U))))));
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) min((max((((/* implicit */long long int) var_7)), (arr_15 [i_0 + 2] [i_0 - 1]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(arr_17 [i_0] [i_0] [(signed char)11])))) < (max((((/* implicit */unsigned int) (_Bool)1)), (3865609822U)))))))))));
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((/* implicit */long long int) (+(arr_4 [i_1])))) : (-1555527261734421996LL))))));
                var_31 = ((/* implicit */int) (!(((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_4 [i_0])))) || (((/* implicit */_Bool) var_3))))));
            }
        } 
    } 
    var_32 = ((/* implicit */short) min((-1555527261734422001LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) var_13))))))));
    var_33 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_9))))))), (((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) & (min((504681598U), (var_3)))))));
}
