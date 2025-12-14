/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120698
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
    var_14 = var_5;
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) ((min((((/* implicit */int) arr_2 [i_1 + 1] [i_0 - 2])), (-1942655943))) > ((~(-1942655934)))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((9689572078789340573ULL) - (262143ULL))) < (arr_4 [i_2] [(_Bool)1])))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        var_17 |= ((/* implicit */long long int) ((((/* implicit */long long int) -1942655947)) == (((long long int) (unsigned short)6786))));
                        var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)6786), ((unsigned short)44912))))) - (((unsigned long long int) 2228174403489974902ULL)));
                        var_19 = ((/* implicit */unsigned short) max((((arr_9 [i_0 - 4] [i_2]) | (arr_1 [i_0 - 4] [i_0 - 3]))), (max((arr_9 [i_0 - 1] [i_2]), (arr_1 [i_0 - 1] [(_Bool)1])))));
                        var_20 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 262143ULL)) && (((/* implicit */_Bool) arr_2 [i_3 - 1] [i_0 - 2])))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 4; i_4 < 12; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)6786)) << (((((/* implicit */int) (unsigned char)170)) - (169))))) & (((/* implicit */int) ((arr_5 [i_2] [i_2] [i_2] [0ULL]) <= (((/* implicit */int) (unsigned short)44905)))))));
                        var_22 = ((/* implicit */unsigned short) -1942655928);
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 1) 
                        {
                            var_23 &= ((/* implicit */int) 262151ULL);
                            var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -1804722595)) == (18198211499982734178ULL)));
                            var_25 ^= ((/* implicit */int) arr_3 [i_4]);
                        }
                        var_26 &= ((/* implicit */short) (+(arr_1 [i_4 + 2] [i_2])));
                    }
                    var_27 &= ((/* implicit */long long int) ((((arr_0 [i_0 + 1]) <= (((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_2])), (arr_13 [i_0] [i_1] [i_2] [i_0] [i_2])))))) || (((/* implicit */_Bool) ((long long int) ((0ULL) >= (((/* implicit */unsigned long long int) -6618679339429824750LL))))))));
                }
            } 
        } 
    } 
    var_28 |= ((/* implicit */int) var_2);
}
