/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164987
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_13 &= (+((+(-2718848347297202044LL))));
                            var_14 = ((/* implicit */unsigned int) (+((+((~(7987458826447106846LL)))))));
                            arr_12 [i_2] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_1] [10ULL] [i_2] [i_3] [6ULL]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3048073824707223223ULL))))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                            {
                                var_15 = 13918755487892551963ULL;
                                var_16 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25089))) - (9824019083101867723ULL));
                            }
                            for (long long int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                            {
                                var_17 = (+((+(arr_3 [i_0] [i_1]))));
                                var_18 = ((/* implicit */short) ((unsigned long long int) (unsigned char)250));
                            }
                            for (long long int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) max((arr_2 [i_6]), (773252760496224439ULL)))) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_6] [i_3])) : (arr_9 [i_2] [i_1] [(unsigned char)1] [i_3] [9]))));
                                arr_20 [i_0] [i_1] [i_2] [i_3] [6ULL] = ((/* implicit */long long int) ((unsigned short) arr_3 [i_6] [i_3]));
                                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [(short)14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), ((+(arr_6 [i_0] [13])))))));
                                arr_21 [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_6]));
                            }
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned short) arr_15 [i_2] [i_3] [i_2] [i_3] [i_7]);
                                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_2] [i_1] [4LL])) ^ (arr_19 [i_0] [i_1] [i_2] [i_3] [10ULL]))) * ((+(0ULL)))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < ((~(16547718338899639953ULL))))))));
                            }
                            arr_24 [4ULL] [i_2] [i_2] [i_3] [(unsigned char)6] = (-(((unsigned long long int) ((((/* implicit */_Bool) 1994754577156146536ULL)) && (((/* implicit */_Bool) var_7))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (-((~(7912150350649186498ULL))))))));
                arr_25 [i_0] [i_0] = max((min((8779988490760692098ULL), (((/* implicit */unsigned long long int) 3211051796539716512LL)))), (((/* implicit */unsigned long long int) -6064110307681421878LL)));
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(max((((/* implicit */unsigned long long int) var_11)), (max((((/* implicit */unsigned long long int) arr_0 [(unsigned char)11])), (arr_16 [i_0] [i_0] [i_1] [i_1] [2ULL] [i_1]))))))))));
            }
        } 
    } 
    var_26 = (-(var_2));
}
