/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181218
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
    var_18 = ((/* implicit */int) var_14);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_8))))) : (((/* implicit */unsigned long long int) var_14))));
    var_20 = ((/* implicit */unsigned char) var_16);
    var_21 = ((/* implicit */unsigned long long int) ((int) var_16));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((int) ((var_7) >> (((/* implicit */int) arr_0 [i_0] [i_0 + 1])))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((0LL) | (((/* implicit */long long int) (+(((/* implicit */int) (signed char)58)))))))) ? (((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned long long int) 476400102)) : (15281326426751125166ULL))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 476400118)) ? (-476400087) : (1288792680))))))));
        var_24 = ((/* implicit */unsigned long long int) (unsigned char)0);
        var_25 = ((/* implicit */long long int) ((((unsigned long long int) var_7)) << (((/* implicit */int) ((((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) arr_1 [i_0]))))) || (((/* implicit */_Bool) -476400109)))))));
    }
    for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        var_26 = ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_1 - 2] [i_1 - 2]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 476400109)) ? (476400109) : (476400087)))));
        var_27 = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_1 - 2])), (var_12)))) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1])) : (((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) (!(var_13)))))));
        var_28 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) (_Bool)1)))));
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_29 = var_11;
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 14; i_5 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30331)) ? (((/* implicit */int) (short)-32249)) : (((/* implicit */int) (_Bool)0))));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [14LL] [i_3] [14LL]))) + (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_3] [i_2] [i_2] [i_2]))) : (arr_8 [i_5 + 1])));
                        var_32 = ((/* implicit */unsigned int) var_15);
                        var_33 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                    }
                    /* vectorizable */
                    for (short i_6 = 2; i_6 < 14; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                        {
                            var_34 = (~(((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6] [i_6 - 1])));
                            var_35 = ((/* implicit */signed char) (+(15281326426751125166ULL)));
                            var_36 = ((/* implicit */unsigned char) ((arr_21 [i_2] [(_Bool)1] [i_6 - 2] [i_6] [(_Bool)1] [i_6]) ? (((/* implicit */int) arr_21 [i_2] [5ULL] [i_6 + 1] [i_6] [i_7] [i_4])) : (-235522216)));
                            var_37 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_17)) ? (var_7) : (var_9))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                            var_38 = ((/* implicit */signed char) (-(476400087)));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                        {
                            var_39 = (-(arr_19 [i_2] [i_3] [i_2] [i_6] [i_8]));
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 476400113))))) >> (((((((/* implicit */unsigned long long int) 476400123)) * (var_15))) - (11748510448825961267ULL)))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                        {
                            var_41 = ((/* implicit */signed char) 4032);
                            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) 11069750523250957185ULL)) ? (1182066811U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        }
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6] [i_6 - 1] [i_6])) && (((/* implicit */_Bool) var_2))));
                        var_44 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_6] [i_3] [i_6 - 1] [i_6]))));
                    }
                    var_45 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_26 [i_3] [i_4] [i_3] [i_3] [i_3])))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_8 [i_4]))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (476400098) : (-958512420))))))));
                    var_46 = ((/* implicit */short) (~((~(var_2)))));
                }
            } 
        } 
    }
    for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        var_47 = ((/* implicit */int) arr_28 [i_10]);
        var_48 = ((/* implicit */unsigned short) max((((unsigned long long int) arr_28 [i_10])), (((/* implicit */unsigned long long int) max((((476400098) + (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_5))))))))));
        var_49 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_28 [i_10])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [19LL])))))));
    }
}
