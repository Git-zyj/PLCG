/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118211
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_15 += ((/* implicit */long long int) (_Bool)0);
        var_16 -= ((((/* implicit */_Bool) min(((+(-5616136162373091204LL))), ((~(9223372036854775807LL)))))) ? (((/* implicit */int) ((6173352282028745650LL) == (((9223372036854775807LL) & (((/* implicit */long long int) (-2147483647 - 1)))))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) != (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min(((_Bool)0), (((_Bool) arr_7 [i_1] [i_1])))))));
                arr_9 [8] &= ((/* implicit */long long int) (_Bool)0);
                var_18 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [6LL])) ? (arr_5 [4LL]) : (3503019781967285364LL))) < ((((_Bool)1) ? (7746584487124457546LL) : (arr_5 [4LL])))));
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_16 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) max((((/* implicit */long long int) -218442350)), (arr_10 [i_1]))))) + (((int) ((int) (_Bool)1)))));
                            /* LoopSeq 3 */
                            for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                            {
                                var_19 ^= ((/* implicit */_Bool) (~(-7746584487124457547LL)));
                                var_20 = ((/* implicit */int) ((1568944107824675400LL) < (((/* implicit */long long int) -807106114))));
                                var_21 = ((/* implicit */_Bool) 807106113);
                            }
                            /* vectorizable */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_22 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 4294967040LL)) ? (-7746584487124457547LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                                var_23 = ((/* implicit */int) ((((/* implicit */long long int) -933163664)) * (0LL)));
                            }
                            for (long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                            {
                                arr_27 [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 6293426602092912278LL);
                                var_24 = ((/* implicit */long long int) max((var_24), ((((_Bool)0) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_25 += ((/* implicit */long long int) ((min((arr_23 [i_1] [16LL]), (6780123070548998440LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -2073511277)) < (7746584487124457547LL)))))));
                            }
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) 3770382761080872899LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((-1809685002) + (1463452714)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [6] [6]))) : (arr_20 [(_Bool)1] [i_2] [i_3] [(_Bool)1] [i_4] [i_4]))))))));
                            arr_28 [i_2] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) -7746584487124457527LL)))) & (min((((arr_19 [i_1] [i_1] [i_3] [i_3] [i_1]) ^ (((/* implicit */long long int) -807106107)))), (((/* implicit */long long int) arr_24 [i_1] [i_2] [i_2] [i_4] [i_4] [i_2] [4LL])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
}
