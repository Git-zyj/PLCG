/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126026
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 |= ((/* implicit */int) ((signed char) ((496091851U) != (496091848U))));
        var_14 = ((/* implicit */long long int) ((signed char) max(((!(((/* implicit */_Bool) var_0)))), (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4)))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) (_Bool)1)))));
                            arr_17 [i_0] [i_0] [i_1] [5U] [i_2 - 1] [i_3] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((unsigned int) arr_7 [i_1] [i_2] [i_3] [i_2]))) : (3818414380631010553LL)));
                            var_16 = ((/* implicit */unsigned int) var_11);
                            var_17 = ((/* implicit */short) ((unsigned int) arr_6 [i_0] [i_1 - 1] [i_2 - 1]));
                            arr_18 [i_4] [i_4] [i_2 - 1] [i_2] [i_4] [i_0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_2 - 1] [i_3]))));
                        }
                        arr_19 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 496091845U)))) ? (((/* implicit */int) ((short) arr_16 [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_2] [i_2 + 1] [i_0]))) : ((-(((/* implicit */int) arr_15 [i_0] [(_Bool)1] [i_1 - 1] [i_2 + 1] [i_1] [i_2]))))));
                    }
                } 
            } 
        } 
        var_18 ^= ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_8 [i_0] [14U] [i_0])))), (((/* implicit */int) ((_Bool) ((unsigned int) 21899184U))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_10 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((long long int) arr_1 [16ULL] [i_0]))) : (((var_12) ? (arr_14 [18ULL] [i_0] [i_0] [i_0] [18ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -1285256658806285947LL)))))))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 3) 
    {
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_5 + 2] [i_5] [i_5 + 3])))))));
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_5] [14U] [i_5]))))) & ((+(((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) 1285256658806285948LL)))))))))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 4; i_6 < 18; i_6 += 1) 
        {
            for (long long int i_7 = 1; i_7 < 19; i_7 += 4) 
            {
                for (unsigned int i_8 = 1; i_8 < 20; i_8 += 1) 
                {
                    {
                        var_23 = min((((/* implicit */long long int) 3386830909U)), (3818414380631010579LL));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((short) max((((/* implicit */int) var_7)), ((~(((/* implicit */int) (short)-1))))))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((short) ((unsigned short) (short)-27049)))) : (((/* implicit */int) ((signed char) arr_0 [i_7 + 2] [i_6 - 4]))))))));
                        var_26 ^= ((/* implicit */unsigned short) ((_Bool) arr_26 [i_6 - 1] [i_6 - 1]));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((unsigned int) -3818414380631010581LL)) >> (((((/* implicit */int) var_1)) + (20221))))))));
    var_28 = ((long long int) (_Bool)1);
}
