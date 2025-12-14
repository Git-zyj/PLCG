/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101017
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19588))) ^ ((-(((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_8)))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))) + (var_0)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [(_Bool)1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_2 - 1] [i_3] [i_3 + 1])) ? (arr_8 [i_1] [i_2 - 1] [i_1] [i_3 + 4]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)12))))) <= ((+(10738650155999692375ULL)))));
                            arr_13 [i_2] [i_3 + 4] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)19596)) / (((/* implicit */int) (_Bool)1)))) <= ((+(((/* implicit */int) var_6))))));
                            var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) ((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned char)3))))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3 + 3] [i_3 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (short)19592))))) + ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3 + 4] [i_3 + 4]))) : (arr_8 [2ULL] [i_2] [i_3] [i_5])))))) ? (((/* implicit */int) ((short) (+(((/* implicit */int) (signed char)11)))))) : ((+(((/* implicit */int) max((arr_3 [i_5]), (var_3))))))));
                            var_18 = ((/* implicit */unsigned char) (signed char)117);
                            var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 3; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-100))))) ? (((((/* implicit */_Bool) 5232106297160811338ULL)) ? (((/* implicit */int) arr_17 [i_2] [i_3 + 3] [i_6])) : (arr_15 [i_0] [i_1] [i_2] [i_3 + 2] [i_3] [i_6]))) : (((/* implicit */int) arr_6 [i_2 - 1] [i_2]))));
                            arr_19 [i_2] = ((/* implicit */unsigned short) var_3);
                            var_21 = (~(((((/* implicit */int) (unsigned short)15365)) + (((/* implicit */int) arr_6 [i_0] [i_2])))));
                        }
                        for (unsigned char i_7 = 3; i_7 < 13; i_7 += 3) /* same iter space */
                        {
                            var_22 += var_12;
                            arr_24 [i_0] [i_2] [i_2] [i_2] [i_7 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) max(((unsigned char)4), (((/* implicit */unsigned char) var_8))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) <= (var_5))))))), (-1LL)));
                        }
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((291319710U) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? ((+(arr_8 [i_0] [i_1] [i_2] [i_3 - 1]))) : (((/* implicit */long long int) 268435455U))));
                    }
                } 
            } 
            var_24 = min((((/* implicit */unsigned short) (signed char)127)), (((unsigned short) (!(((/* implicit */_Bool) 1LL))))));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)2] [i_1] [i_1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [(signed char)0] [(signed char)0] [i_1]))))))));
        }
        for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            var_26 |= ((/* implicit */unsigned long long int) (short)-19013);
            var_27 = ((/* implicit */signed char) (unsigned short)19965);
        }
        var_28 = ((/* implicit */long long int) (+(18446744073709551615ULL)));
        arr_29 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)8191))))) ? (((/* implicit */int) (unsigned char)252)) : (((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) var_4)) - (21416)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])) ? (-1376679774) : (((/* implicit */int) var_10)))) == (((/* implicit */int) var_3))))) : (((int) arr_14 [i_0] [(unsigned char)8] [(unsigned short)4] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_9] [i_9])) ? (2453897452U) : (((/* implicit */unsigned int) -1738678256)))));
            var_30 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)46164)) > (1376679775)));
        }
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [4U] [4U] [i_9]))) : (((((/* implicit */_Bool) (signed char)127)) ? (var_5) : (((/* implicit */unsigned long long int) -1376679776)))))))));
        var_32 = (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_25 [i_9] [i_9] [i_9]))));
        var_33 = ((/* implicit */long long int) ((((_Bool) (unsigned short)63000)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15557657908804823087ULL)) ? (((/* implicit */int) arr_0 [i_9] [i_9])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (2889086164904728528ULL)))));
    }
}
