/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159295
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) var_1)))))));
                                var_21 = ((/* implicit */unsigned long long int) ((long long int) (-(((((/* implicit */_Bool) arr_1 [i_4] [i_1])) ? (arr_8 [i_0] [i_1] [i_1] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) arr_5 [i_5] [i_5]);
                                var_23 -= ((/* implicit */_Bool) min((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (3525644699018404967LL))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3525644699018404967LL)))))) : (((long long int) arr_0 [i_2])))), (min((((/* implicit */long long int) var_10)), (arr_12 [i_0] [i_0] [i_0 - 2] [i_0])))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) ((var_19) >= (((/* implicit */unsigned long long int) 3525644699018404993LL)))))) & (min((var_14), (-3525644699018404967LL))))))))));
                                var_25 = (!(((/* implicit */_Bool) 0ULL)));
                                var_26 = ((/* implicit */_Bool) (~((+(1834419054016697816ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = min((((/* implicit */unsigned long long int) arr_7 [i_0] [2LL])), (((((33554368ULL) & (((/* implicit */unsigned long long int) var_12)))) ^ (min((var_17), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 - 1] [i_0])))))));
    }
    for (long long int i_7 = 2; i_7 < 17; i_7 += 3) 
    {
        var_28 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_29 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_7])) < (((/* implicit */int) var_1))))) <= ((-(((/* implicit */int) (_Bool)1)))))));
        var_30 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_1)), (1083494421264739871ULL)));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_10 = 2; i_10 < 15; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (14201610270474406656ULL)));
                            var_32 = (-(min((arr_25 [i_8] [i_9 + 2] [i_10 - 1]), (((/* implicit */unsigned long long int) arr_15 [i_9 - 1] [i_10 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) arr_31 [i_13] [i_13] [i_8] [i_9] [i_8]);
                            var_34 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 4294967292ULL)) || (var_16))))));
                            var_35 = -5509325583227047371LL;
                            var_36 = ((((/* implicit */_Bool) ((((/* implicit */int) ((var_15) <= (((/* implicit */unsigned long long int) -7792171035706065744LL))))) + (((/* implicit */int) arr_24 [i_8] [i_8] [i_12] [i_13]))))) ? (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) : ((((~(18446744073709551607ULL))) % (((((/* implicit */unsigned long long int) 4679489599010657682LL)) + (4245133803235144937ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_37 += ((/* implicit */_Bool) ((unsigned long long int) (+(max((var_13), (((/* implicit */unsigned long long int) var_12)))))));
}
