/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108440
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
    var_16 = ((/* implicit */short) (+(((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((min(((unsigned short)1), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_1] [i_2])))), ((unsigned short)1))))));
                    arr_10 [i_0] [i_0] [i_2] [i_0] &= ((/* implicit */unsigned int) ((min((((/* implicit */int) arr_1 [i_2])), (((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned short)1)))))) * ((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_2 [i_0]))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 4; i_3 < 21; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((/* implicit */int) (unsigned char)7))))))) ? ((~((~(var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((+((-9223372036854775807LL - 1LL)))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))))))))))));
                        var_18 = ((/* implicit */unsigned int) (unsigned short)1);
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1278636108497730561LL)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1278636108497730561LL)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) < (((/* implicit */int) var_15))))))))));
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_11)), (((long long int) 8379573015160860202ULL))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (((+(var_5))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))))))));
                            arr_20 [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)14))));
                        }
                    }
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)83)) || (((/* implicit */_Bool) var_7))))) < (((/* implicit */int) (unsigned short)15))))), (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2] [i_5] [i_2] [i_2])) ? ((+(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 - 2] [i_1] [i_1])))))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~(((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)197)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2]))))))))))));
                    }
                    var_23 &= ((/* implicit */unsigned char) (((~(arr_12 [i_0] [i_1 - 1] [i_1] [i_1] [i_0] [i_2]))) & (((/* implicit */long long int) (-(max((3U), (((/* implicit */unsigned int) var_8)))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1278636108497730564LL)) ? (1278636108497730563LL) : (arr_5 [i_0]))) & (arr_5 [i_6]))))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_6])) > (((/* implicit */int) (_Bool)0))));
            var_27 *= ((/* implicit */unsigned short) (signed char)95);
        }
    }
    var_28 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65493))))), (((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) (unsigned short)16996))))))));
}
