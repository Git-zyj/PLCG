/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157746
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
    var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) var_13))))), (min((var_13), ((-(((/* implicit */int) (short)-14181))))))));
    var_18 = ((/* implicit */unsigned short) var_0);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)26215)) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5919609557946405901LL)) ? (-1074838742548124592LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55)))))) : (var_4))) : (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) min((var_15), (((/* implicit */unsigned short) (_Bool)1))))), (var_13))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) (short)-8712)), (var_12)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1074838742548124587LL)) ? (1007234361006988789LL) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) (unsigned char)154))))) : (min((((/* implicit */unsigned long long int) ((short) 0))), (min((var_4), (((/* implicit */unsigned long long int) (short)-25048))))))));
        arr_2 [i_0] = ((/* implicit */short) (unsigned char)65);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_22 += (+(1612492078U));
            arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) == (((((/* implicit */_Bool) var_9)) ? (var_13) : (var_13)))));
            var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) -1216490188)) ? (var_1) : (var_10)));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (unsigned short)43733)) : (((/* implicit */int) (short)-11595))));
        }
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    {
                        arr_19 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))) : (var_14))));
                        var_25 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 1005860345U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)176))))));
                    }
                } 
            } 
        } 
        arr_20 [i_1] = ((/* implicit */unsigned long long int) var_13);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_26 = ((/* implicit */_Bool) var_12);
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)256)) ? (var_10) : (((/* implicit */int) (short)11594))))) ? (((/* implicit */unsigned long long int) var_2)) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_12)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_5))));
    }
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (1174327294822129115LL)))) ? (((((/* implicit */int) var_3)) - (var_2))) : (((/* implicit */int) var_6))));
}
