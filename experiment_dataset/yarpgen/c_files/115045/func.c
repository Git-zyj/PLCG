/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115045
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
    var_15 += ((/* implicit */_Bool) (+(((((((/* implicit */int) var_13)) >= (((/* implicit */int) var_13)))) ? (((/* implicit */int) max(((short)1020), ((short)-1020)))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)48))))))));
    var_16 = var_5;
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((var_2), (((((/* implicit */long long int) ((/* implicit */int) var_3))) - ((+(2653623102423532889LL))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 6; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */short) min((min((var_0), (((/* implicit */unsigned long long int) arr_6 [i_1])))), (((/* implicit */unsigned long long int) ((72057593903710208LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_14 [(unsigned short)7] [i_0 + 1] [i_3] [3] [i_0]))) ? (((/* implicit */unsigned long long int) 5265213655387918628LL)) : (var_0)));
                                var_20 = ((((/* implicit */int) var_6)) >> (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (min((((/* implicit */long long int) (short)6186)), (-6336845654161521720LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)10))))) + (6336845654161521720LL))));
                                var_21 ^= ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) arr_6 [i_1])), (arr_13 [i_4 - 2] [0U])))) < (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]))));
                                arr_16 [i_0] [i_4] [i_0] [i_4] [i_4] [(signed char)5] [i_1] = ((/* implicit */short) 4565587664467990263ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        arr_19 [i_0 + 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_2 - 2] [i_2] [i_2] [i_0]))) : (-4004093555012301887LL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_8 [i_0] [i_1] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2 + 3])))))), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) * (-2943150299419219500LL)))))) : ((+(14293198358152490699ULL)))));
                        var_22 += ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_2] [i_1]);
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (unsigned short)36665))));
                        arr_20 [i_2] [i_2] [i_2 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)36665)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_0 + 2] [i_1] [i_2] [i_0 + 2])) > (((/* implicit */int) (unsigned short)17489)))))) <= (((5150071312313374790LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) : (((long long int) 7254331740756295222LL))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_2 + 4] [i_6] = ((((/* implicit */int) arr_10 [i_1] [i_2] [i_2 + 1] [i_6])) + (((/* implicit */int) var_10)));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 4565587664467990263ULL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1])))))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1021)) ? (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (var_0) : (var_11))) : (((/* implicit */unsigned long long int) ((0) + (((/* implicit */int) (unsigned short)28870)))))));
                        arr_24 [i_6] [i_0] [i_2 + 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4063232)) ? (9110757894255453580LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_6] [i_1] [i_2 + 3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [i_0 - 1]))));
                    }
                    var_27 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_0] [(unsigned char)2] [i_2] [i_2])))) / (((((/* implicit */_Bool) var_3)) ? (2126259751726850066LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4005449007U)) ? (((/* implicit */int) arr_21 [i_0] [i_0 - 1] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)131)))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned short) var_5);
}
