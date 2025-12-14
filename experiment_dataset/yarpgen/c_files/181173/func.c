/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181173
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
    var_18 = ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) ((var_15) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
    var_19 = var_11;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_2]))));
                            arr_11 [i_0] [(short)8] [(short)8] [i_2] [15LL] [i_3] = ((/* implicit */signed char) ((long long int) ((arr_8 [(short)8]) | (min((arr_3 [i_2 + 1] [i_3]), (((/* implicit */unsigned long long int) (short)-24417)))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_0] = ((/* implicit */long long int) ((short) (-(arr_10 [i_0] [13U] [(unsigned short)15] [13U] [i_1] [i_0]))));
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((196268743278459491LL), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))) % (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0] [14U]) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) arr_2 [i_1]))))) : (max((((/* implicit */unsigned long long int) min((-6188351892479578460LL), (((/* implicit */long long int) 1915324915U))))), (((((/* implicit */_Bool) (unsigned short)7095)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [(short)1]))) : (arr_3 [i_1] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 3; i_4 < 12; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) (signed char)-5))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                            {
                                var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)25852)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (max((var_10), (((/* implicit */unsigned long long int) (unsigned short)24588))))))));
                                var_23 = ((/* implicit */short) arr_22 [i_5] [i_5]);
                            }
                        }
                    } 
                } 
                arr_28 [12LL] [i_5] = ((/* implicit */short) min(((~(((/* implicit */int) arr_5 [i_4] [(unsigned short)13])))), (((((/* implicit */_Bool) 12436610957497447310ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_5] [i_5]))))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((1601998196U), (((/* implicit */unsigned int) (short)-19962)))), (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((15767667354682377252ULL) != (((/* implicit */unsigned long long int) 693421681U)))))));
                arr_29 [(unsigned short)4] [i_5] = ((/* implicit */_Bool) arr_16 [3U] [i_5] [(short)7]);
            }
        } 
    } 
    var_25 = ((int) (short)18597);
}
