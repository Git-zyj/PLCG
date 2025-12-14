/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110566
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
    var_11 |= (+(var_4));
    var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_10) == ((+(var_8))))))));
    var_13 = ((451963321600981266ULL) * ((+(((4238691079411416038ULL) / (var_8))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = min((min((arr_1 [i_0 - 3]), (var_1))), (17994780752108570349ULL));
        var_14 += 4238691079411416038ULL;
        arr_3 [i_0] [i_0 - 3] = (((~(var_6))) & (max((arr_0 [i_0 - 3]), (var_4))));
        arr_4 [14ULL] = ((((/* implicit */_Bool) 14208052994298135578ULL)) ? (14208052994298135578ULL) : (17676701854452854696ULL));
    }
    for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 2) 
    {
        var_15 = 451963321600981266ULL;
        arr_8 [i_1] = (+(var_1));
    }
    for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    {
                        arr_19 [i_2] [i_3] [i_3] [i_3] = 18446744073709551615ULL;
                        arr_20 [i_2] = 536870911ULL;
                    }
                } 
            } 
            var_16 = 4238691079411416038ULL;
            var_17 = 7033371985297334607ULL;
        }
        var_18 += 2381841039192680787ULL;
    }
    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_19 = min(((~(17994780752108570349ULL))), (18446744073709551604ULL));
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            arr_27 [i_6] [i_7] [i_7] = min((var_3), (((min((648989040100918940ULL), (14208052994298135601ULL))) | (((unsigned long long int) var_1)))));
            var_20 = max((288230376151711743ULL), (18446744073709551615ULL));
        }
    }
}
