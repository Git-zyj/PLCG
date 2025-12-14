/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161834
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
    var_15 = ((max((((/* implicit */unsigned long long int) 0LL)), (var_12))) % (((/* implicit */unsigned long long int) (~(var_14)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((arr_2 [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((2198956146688ULL), (((/* implicit */unsigned long long int) (short)5208)))))))))))));
        var_17 = ((/* implicit */short) 3165588794134729665LL);
        arr_3 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) arr_1 [(_Bool)0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) (~((~(3165588794134729679LL)))));
    }
    for (short i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 2ULL)) || (((/* implicit */_Bool) 0ULL))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (arr_6 [i_1] [i_1 + 3]))))));
        var_19 = ((/* implicit */unsigned long long int) arr_7 [i_1] [(_Bool)1]);
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((~(((/* implicit */int) (!(((/* implicit */_Bool) 2474771531771341588ULL))))))) & (((/* implicit */int) ((short) arr_8 [i_1 + 3] [i_2 - 1]))))))));
            /* LoopNest 2 */
            for (short i_3 = 4; i_3 < 24; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [15LL] [i_3] [i_2]))));
                        var_22 = ((/* implicit */unsigned long long int) -3165588794134729675LL);
                        arr_18 [i_1] = ((/* implicit */unsigned long long int) arr_13 [i_4] [i_1] [8LL] [i_1]);
                        arr_19 [i_1] [i_1 - 1] [10ULL] [i_1] [i_1 + 2] [i_1] = ((/* implicit */long long int) arr_14 [i_1] [i_1] [i_3 - 1] [i_4]);
                        /* LoopSeq 2 */
                        for (long long int i_5 = 2; i_5 < 23; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [12LL] [24LL]))) % (3323616081680258606LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 3323616081680258620LL)))))))))) < (((3323616081680258606LL) & (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5 + 1] [i_3 - 2] [i_2 - 1] [i_1 + 3])))))));
                            var_24 = min((max((arr_5 [i_1 + 2] [i_1 + 2]), (((/* implicit */unsigned long long int) arr_20 [14LL])))), (((/* implicit */unsigned long long int) arr_21 [16ULL] [16ULL] [i_2 - 1] [16ULL] [i_1 - 1])));
                            var_25 = ((/* implicit */long long int) arr_17 [i_1 - 1] [i_1] [i_1]);
                            arr_22 [12LL] [14LL] [i_4] [(_Bool)1] [i_5 + 1] [i_5] [12LL] |= (~(3557865007999127407ULL));
                            var_26 = ((/* implicit */long long int) var_1);
                        }
                        for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            var_27 -= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_14 [i_6] [i_4] [i_1] [i_1])) < (((/* implicit */int) arr_9 [i_1 + 2] [8LL] [i_1 + 2]))))))))));
                            var_28 = ((/* implicit */_Bool) ((arr_23 [i_4] [i_4] [i_3] [i_2] [13LL] [i_1]) ? (var_5) : ((~(min((9931961803720791917ULL), (((/* implicit */unsigned long long int) var_10))))))));
                            arr_25 [i_6] [i_4] [17LL] [17LL] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
                        }
                    }
                } 
            } 
            var_29 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2 - 1] [i_2 - 1]))))), (((/* implicit */unsigned long long int) (~(var_14))))))) ? ((-(6979458307856618386ULL))) : (((arr_13 [i_1 - 1] [i_1] [(_Bool)1] [i_2]) ? (var_6) : (arr_6 [16ULL] [i_1 - 1])))));
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        var_30 = ((/* implicit */long long int) (short)(-32767 - 1));
        var_31 = ((/* implicit */long long int) min((var_31), (-3323616081680258607LL)));
        var_32 ^= ((((/* implicit */unsigned long long int) -3165588794134729647LL)) < (10040983340267755664ULL));
    }
    for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 2) 
    {
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [19LL] [i_8 + 4])) ? (arr_15 [0ULL]) : (arr_7 [i_8 + 2] [i_8]))))))) ? (((/* implicit */unsigned long long int) (-(var_14)))) : (((((/* implicit */_Bool) var_13)) ? (((var_6) * (var_6))) : (((((/* implicit */_Bool) arr_6 [i_8 + 4] [7ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32751))) : (var_0)))))))));
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_8 + 2]))) * (7047796928312011105LL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_8 + 4])))))));
        var_35 = ((/* implicit */short) arr_29 [i_8 + 2] [i_8]);
        var_36 = arr_14 [i_8] [i_8] [i_8 + 1] [i_8];
        var_37 = arr_30 [i_8 + 4];
    }
}
