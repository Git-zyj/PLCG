/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116591
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17)))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_4 [(unsigned char)2] [i_1] = ((/* implicit */unsigned int) ((short) arr_0 [i_0 - 3]));
            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_17))));
            var_21 = ((/* implicit */long long int) (~((~(arr_2 [7LL])))));
        }
        for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            arr_7 [i_0 + 1] [i_2 - 1] [i_0 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_12)))) && (((/* implicit */_Bool) (unsigned char)135))));
            arr_8 [i_2] [i_0] = ((/* implicit */signed char) (unsigned char)135);
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
            {
                arr_11 [i_0 - 2] [i_2] [i_3] = ((/* implicit */short) (~(arr_3 [i_2 + 2] [i_0 - 2])));
                var_22 = ((/* implicit */unsigned char) ((134213632U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24)))));
                var_23 = ((/* implicit */int) (+(var_11)));
                var_24 = ((/* implicit */unsigned char) arr_6 [i_2] [i_3]);
                /* LoopSeq 4 */
                for (short i_4 = 3; i_4 < 15; i_4 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                    var_26 += ((/* implicit */signed char) (~(((/* implicit */int) (short)9027))));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (short)15))) > (((/* implicit */int) (short)0))));
                }
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    arr_18 [i_5] [(unsigned short)15] [i_2 - 2] [i_0] = ((/* implicit */signed char) var_17);
                    arr_19 [6ULL] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)132)) ^ (((/* implicit */int) (unsigned char)135))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
                    {
                        arr_23 [i_0] [i_2] = (+(1036933246533386319ULL));
                        arr_24 [i_6] = ((/* implicit */unsigned char) 17592183947264ULL);
                        var_28 = ((/* implicit */unsigned int) var_2);
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned short) ((1494400847U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_0 - 3])))))));
                        var_30 = ((/* implicit */unsigned int) ((short) (-2147483647 - 1)));
                        arr_28 [i_7] = ((/* implicit */unsigned long long int) arr_5 [i_5]);
                    }
                    arr_29 [i_0] [13ULL] [i_0] = ((/* implicit */short) ((int) (+(2546244338U))));
                    arr_30 [i_0] [i_2] [i_3] [(unsigned char)9] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 134213632U)) ? (((/* implicit */int) arr_5 [i_0])) : (arr_2 [i_0])))));
                }
                for (unsigned char i_8 = 2; i_8 < 16; i_8 += 3) 
                {
                    var_31 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_32 *= ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 2]))));
                    var_33 = ((/* implicit */long long int) (~(((unsigned long long int) arr_27 [i_2] [i_2] [i_2] [i_3] [i_2]))));
                    arr_33 [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) (unsigned char)98)))) : ((+(((/* implicit */int) arr_31 [i_2]))))));
                }
                for (unsigned short i_9 = 2; i_9 < 16; i_9 += 1) 
                {
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((_Bool) arr_15 [i_0 - 3])))));
                    arr_36 [(unsigned char)6] [(unsigned char)16] [(unsigned char)16] [i_9] [i_3] [(unsigned char)16] = ((unsigned char) arr_9 [i_2 + 2] [i_2 + 1]);
                }
            }
            for (short i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
            {
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (+((+(((/* implicit */int) var_17)))))))));
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) var_12))));
            }
            var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
        }
    }
    for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        var_38 += ((/* implicit */int) ((unsigned char) ((short) (unsigned char)255)));
        var_39 += ((/* implicit */unsigned int) var_15);
    }
    var_40 = var_6;
    var_41 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_1)))) ? ((((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)135)) % (((/* implicit */int) var_5))))))), (var_12)));
}
