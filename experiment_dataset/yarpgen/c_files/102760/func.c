/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102760
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (-(((((int) var_8)) | ((-(((/* implicit */int) (unsigned char)255)))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), ((!(((/* implicit */_Bool) (+(((/* implicit */int) max((var_10), (var_9)))))))))));
                                var_17 -= ((/* implicit */int) (unsigned char)5);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((((/* implicit */long long int) (-(-231224903)))) != (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_2] [i_1] [i_2]) != (15LL))))) : (arr_3 [i_1 - 2] [i_1 - 2])))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_13))))));
                        var_20 = ((/* implicit */unsigned short) arr_13 [i_1] [i_5 - 1] [i_0] [i_5]);
                        var_21 &= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (_Bool)0)))));
                        var_22 = ((/* implicit */unsigned short) arr_8 [(signed char)15] [i_2]);
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_16 [i_6] [i_5] [i_0] [8ULL] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_5] [i_5] [i_5 - 1] [2ULL] [i_5 - 1] [i_5 - 1] [i_5])))) | (((long long int) arr_14 [14LL] [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5]))));
                            var_23 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) -67108864)))));
                            var_24 = ((/* implicit */short) 3456058542747138580LL);
                            var_25 &= (+(var_5));
                            arr_17 [i_0] [16ULL] [i_2] [i_5] [i_0] = ((/* implicit */unsigned short) (((+(arr_13 [i_5 - 1] [(signed char)19] [(signed char)19] [i_5 - 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [19U] [i_0])))))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_7 [i_5] [i_0] [i_0] [i_1 - 1]) % (arr_7 [i_1 - 1] [i_0] [i_0] [i_1 - 1])))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_5 - 1] [i_0] [i_0] [i_1 + 1]))) : (min((arr_7 [i_7] [i_0] [i_0] [i_1 + 2]), (((/* implicit */int) var_10))))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((arr_13 [i_0] [i_2] [i_2] [i_0]) == (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_9))))))))))));
                            var_28 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_8 [i_5] [i_5 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_2] [i_1 - 2] [i_1]))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        arr_22 [i_0] = ((/* implicit */_Bool) ((unsigned char) var_6));
                        var_29 = ((/* implicit */long long int) var_3);
                    }
                }
            } 
        } 
    } 
    var_30 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_0)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_9)))))), (((/* implicit */int) max((var_0), (((/* implicit */short) var_4)))))));
    var_31 ^= ((/* implicit */int) var_14);
}
