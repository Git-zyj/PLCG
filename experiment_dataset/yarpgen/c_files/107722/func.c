/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107722
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((max((((/* implicit */unsigned long long int) max(((short)-30258), (((/* implicit */short) (signed char)-97))))), (var_4))) + (var_2)))));
    var_15 += ((/* implicit */short) ((((((/* implicit */_Bool) 8552465059935122970ULL)) && (((/* implicit */_Bool) (~(1845368481)))))) ? (((((/* implicit */_Bool) 140737488355327ULL)) ? (13648648270070382369ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30263))))) : (((/* implicit */unsigned long long int) (-(((long long int) var_12)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 2) /* same iter space */
        {
            var_16 = ((((/* implicit */_Bool) (short)-30255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)82))) : (14456900171353693113ULL));
            var_17 = ((short) (-(6600118025390611048ULL)));
            var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2720469062U))) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        }
        for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 2) /* same iter space */
        {
            arr_7 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((short) var_13));
            arr_8 [i_0] [i_2] [i_0] = ((/* implicit */signed char) 1250536555329560838ULL);
            var_19 = ((unsigned long long int) var_6);
        }
        for (short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_8))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_14 [12U] [(short)3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) + (((/* implicit */int) (signed char)-73))))) ? (((((/* implicit */unsigned long long int) var_13)) ^ (1250536555329560844ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (arr_6 [(_Bool)1])))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_0 [(_Bool)1]))));
            }
        }
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_22 += ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) arr_15 [i_0] [i_5])) - (29)))));
            arr_17 [i_0] [i_0] [i_5] = ((/* implicit */short) ((unsigned short) var_2));
            arr_18 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) var_6);
        }
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_23 = ((/* implicit */short) ((3016732140U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)19832)))));
            arr_22 [i_6] [i_6] [i_6] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1064462105255474307LL)))) + (var_3));
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            var_24 *= ((((unsigned long long int) var_2)) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7 + 1] [i_7] [i_7 + 1]))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_20 [i_0]))))))));
        }
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((int) 1089564120))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-10481))) + (var_13)))));
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-30267)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54)))))))))));
}
