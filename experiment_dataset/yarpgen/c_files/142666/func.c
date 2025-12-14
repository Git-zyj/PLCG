/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142666
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_12))) < (min((arr_4 [i_1 - 1] [i_2 + 1]), (((/* implicit */unsigned int) var_1))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2] [i_1 - 1] [i_0])) - (((/* implicit */int) arr_5 [i_2] [0U] [i_0]))))) ? (arr_7 [(unsigned short)9] [(unsigned short)9] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (-(max((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_7)))), (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */int) var_8))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_16 ^= ((/* implicit */short) min((max((((/* implicit */long long int) var_2)), (((((/* implicit */long long int) var_3)) | (-9067113308665089842LL))))), (((/* implicit */long long int) (+(max((var_6), (((/* implicit */unsigned int) var_5)))))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)32358)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (arr_10 [(signed char)9] [(signed char)9] [i_2 - 1])));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (arr_12 [i_4] [i_3] [i_2] [i_0] [i_1 - 1] [i_0] [i_0]))))) * ((((_Bool)1) ? (((/* implicit */long long int) var_6)) : (var_0)))))) ? (min((arr_10 [i_1 - 1] [i_2 - 1] [i_2]), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_4] [i_4] [7U]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [14ULL] [i_2] [9] [i_3] [i_4]))) ^ (var_6))) : (min((((/* implicit */unsigned int) (short)32355)), (arr_4 [i_2] [i_1]))))))));
                        }
                        for (long long int i_5 = 4; i_5 < 18; i_5 += 3) 
                        {
                            var_19 = ((max((((/* implicit */unsigned int) arr_5 [i_2 + 1] [i_5 - 3] [i_1 - 1])), (((((/* implicit */unsigned int) ((/* implicit */int) (short)24786))) ^ (var_6))))) * (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)121)) : (var_1))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_3])))))))));
                            arr_19 [i_3] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) arr_3 [i_0]);
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((max((var_5), (((/* implicit */short) arr_5 [i_5 - 4] [i_1 - 1] [i_2 - 1])))), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_5)))))))))))));
                            arr_20 [i_0] [i_2] [i_0] [i_5 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (9067113308665089841LL)));
                            var_21 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-17)), ((short)32358)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_13)))))));
                        }
                        var_22 ^= ((/* implicit */unsigned char) var_11);
                    }
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */_Bool) ((short) (short)24811))) && (((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) var_12)))))))));
                        var_24 += ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_6] [i_0] [i_6])) > (((/* implicit */int) var_8))))) / (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_11)))))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1 - 1])) > ((+(((/* implicit */int) var_7)))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_26 *= ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 - 1]);
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) -7684162431763555843LL)), (0ULL))))));
                        arr_27 [i_0] [(unsigned char)14] [(unsigned char)14] [i_2 - 1] [i_2 - 1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9067113308665089827LL)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? ((~(4146819090U))) : ((~(var_12))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((-14) < (((/* implicit */int) (unsigned short)37316))))) * (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_14 [i_2] [i_1 - 1] [i_2 + 1] [i_1] [i_1 - 1] [i_1 - 1]))))));
                        var_29 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (var_1)))) ? (min((((/* implicit */int) var_8)), (var_1))) : (min((((/* implicit */int) var_9)), (var_1))))), (((/* implicit */int) ((arr_12 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) && (((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */short) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_8))));
}
