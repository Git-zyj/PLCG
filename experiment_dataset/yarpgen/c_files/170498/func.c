/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170498
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_12 ^= arr_1 [i_0] [i_1];
                            var_13 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_4]))));
                            var_14 = 15784910253099983492ULL;
                            var_15 ^= ((/* implicit */unsigned char) ((max((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0] [i_1]))) | (305160399U))), (((/* implicit */unsigned int) ((arr_2 [i_1]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_6 [i_0]))))))) << (((min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])), (2313937054655824082ULL))) - (2313937054655824061ULL)))));
                        }
                        for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) ((var_6) > (((/* implicit */int) var_2))))), (max(((unsigned short)24132), (var_2))))), (((/* implicit */unsigned short) ((_Bool) (+(arr_4 [i_3] [i_2] [i_1])))))));
                            var_17 = (~((~(((/* implicit */int) arr_13 [i_5] [i_3] [i_2] [i_3] [i_0])))));
                            var_18 = ((/* implicit */unsigned short) var_7);
                        }
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            arr_16 [i_3] [i_3] [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) max(((~(var_3))), (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)128)), (arr_13 [i_0] [i_3] [i_0] [i_0] [i_0])))))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (min((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_0]), (((/* implicit */unsigned short) arr_6 [i_2])))), (min((arr_13 [i_6] [i_2] [i_2] [i_2] [i_0]), (arr_13 [i_6] [i_2] [i_2] [i_2] [i_0])))))));
                            arr_17 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) ((2814044303U) < (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_0] [i_3] [i_0] [i_0] [i_0])))))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1181889520)) ? (((1340658233U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_9)), ((short)-23575))))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((8517060904973601019LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) arr_6 [i_2])) + (((/* implicit */int) var_7)))) : (((/* implicit */int) var_11))))))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (3562732240839239575LL)))) ? (((/* implicit */int) min(((unsigned short)60685), (var_1)))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1])) == (arr_12 [i_3] [i_3] [i_3]))))))) ? (min((((/* implicit */unsigned int) max((-131072), (((/* implicit */int) (unsigned short)2776))))), (((2814044303U) ^ (((/* implicit */unsigned int) arr_4 [i_0] [i_2] [i_6])))))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)45512)) < (arr_12 [i_0] [i_1] [i_3])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)51422)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3])))))))));
                        }
                        arr_18 [i_3] = ((/* implicit */short) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_1] [i_3] [i_0]))))), (max((((/* implicit */unsigned int) (unsigned short)36031)), (var_5))))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))), (max((var_4), (((/* implicit */unsigned int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -772095710)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50418))) : (var_8))))));
        var_23 |= ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) min(((short)-27474), (((/* implicit */short) arr_2 [i_0]))))), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
    var_25 &= ((/* implicit */unsigned long long int) max(((-(((((/* implicit */unsigned int) 1474351528)) / (var_10))))), (var_4)));
}
