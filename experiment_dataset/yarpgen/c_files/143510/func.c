/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143510
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
    var_19 = ((/* implicit */unsigned char) (unsigned short)64816);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */long long int) ((unsigned int) 1125831187365888ULL));
                var_21 = ((/* implicit */unsigned char) ((long long int) (unsigned short)37070));
                arr_8 [i_2] = ((/* implicit */short) ((var_14) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37070)))));
                arr_9 [i_0] = ((/* implicit */signed char) ((unsigned char) (short)4869));
            }
            for (long long int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28447)) ? (((/* implicit */int) (unsigned short)8584)) : (((/* implicit */int) (signed char)25))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2251795518717952LL)) ? (((/* implicit */int) (unsigned short)37070)) : (((/* implicit */int) (unsigned short)37054))))) : (var_4))))));
                var_23 = ((/* implicit */signed char) ((unsigned long long int) (_Bool)1));
                arr_12 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (-6LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_14) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25)))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17))));
            }
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (unsigned short)37063))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 2) 
                {
                    {
                        arr_20 [i_0] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) 2251795518717946LL);
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((-2251795518717940LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)25)))))) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11))))))))));
                    }
                } 
            } 
            var_27 = ((unsigned short) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned long long int) 2251795518717981LL)) : (var_1)));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 4; i_7 < 22; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13414464538848638049ULL)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (signed char)81))))) || (((/* implicit */_Bool) (signed char)-39)))))));
                    arr_26 [i_7] [i_7] [i_8] = ((/* implicit */short) ((unsigned long long int) (signed char)-79));
                }
            } 
        } 
        arr_27 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)5)) ? (-2251795518717982LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28481)))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (signed char)-41))));
    }
    for (short i_9 = 1; i_9 < 10; i_9 += 1) 
    {
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)37072)))));
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4150))) * (max((var_10), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (signed char)12))) ? (((-1591020768409724603LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))) : (2251795518717994LL)))))))))));
        var_32 = ((/* implicit */_Bool) (short)-4161);
    }
    for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 2) 
    {
        var_33 = (signed char)20;
        /* LoopSeq 1 */
        for (long long int i_11 = 3; i_11 < 18; i_11 += 1) 
        {
            var_34 = ((/* implicit */long long int) max((var_34), (-2251795518717981LL)));
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2147483647)) != (((((/* implicit */_Bool) ((int) (unsigned short)46430))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-90))))))))))));
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) var_5))));
        }
    }
}
