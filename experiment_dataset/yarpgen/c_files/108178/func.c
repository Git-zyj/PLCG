/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108178
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_10 [(unsigned char)6] [i_2 + 1] [i_1] [(unsigned char)6] |= ((/* implicit */signed char) ((((/* implicit */int) (((~(((/* implicit */int) (unsigned char)178)))) != (((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [(unsigned char)2] [i_2] [i_1] [(unsigned char)2])), ((unsigned char)178))))))) <= (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_9 [0U] [i_2 + 1] [i_2 + 1] [0U])) + (26)))))));
                            var_17 += ((/* implicit */short) min((11938000907291209000ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14427006935153447815ULL)) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_3 - 2] [i_3 - 2] [i_3])) : (((/* implicit */int) arr_9 [(_Bool)0] [i_3 - 1] [i_3] [i_3])))))));
                            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 2; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned char i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [(unsigned char)10] [(unsigned char)10] [(unsigned char)8] [(unsigned char)10]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_16)))))) << (((((/* implicit */int) var_6)) - (50))))))));
                                arr_18 [i_0] [i_1] [i_5] [i_5 + 1] [i_5] = arr_17 [i_0 - 1] [i_0] [i_0 + 3] [i_5] [i_0 - 1] [i_0] [(unsigned char)0];
                                arr_19 [(_Bool)1] [i_5] [i_4] [i_1] [(_Bool)1] |= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 18446744073709551613ULL)) && (((/* implicit */_Bool) 11947275506602039274ULL)))) || (((/* implicit */_Bool) max((11411826052683472865ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)84)) > (((/* implicit */int) arr_16 [i_0] [i_0] [(short)5] [i_0] [i_0]))))) : (((/* implicit */int) ((unsigned char) arr_11 [i_0]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 12; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        {
                            var_20 *= (+(var_11));
                            var_21 = ((/* implicit */unsigned char) 16);
                            var_22 = ((/* implicit */unsigned char) 8191ULL);
                            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)1)), (2232082846U)))) && (((((/* implicit */int) arr_13 [7ULL] [i_7] [i_7] [i_7])) >= (((/* implicit */int) arr_14 [i_7])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (short i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        {
                            arr_31 [i_9 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) (short)0)), (18446744073709551613ULL)))))) ? (max(((-(((/* implicit */int) (unsigned char)5)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)228)) || (((/* implicit */_Bool) arr_14 [(unsigned char)4]))))))) : (((/* implicit */int) (_Bool)1))));
                            arr_32 [i_10] [i_9 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)39179);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 3; i_11 < 12; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 3) 
                    {
                        for (signed char i_13 = 1; i_13 < 10; i_13 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_0 - 1] [i_11 - 2])) <= (((/* implicit */int) arr_15 [i_0 + 2] [i_11 - 1])))))) + (((long long int) arr_29 [i_13] [i_13 + 3] [i_13 + 3] [i_13 + 3] [i_13 + 3]))));
                                arr_41 [i_0] [i_1] [i_11] [(unsigned char)5] [i_13] = ((/* implicit */unsigned short) arr_37 [i_0 + 3] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_14 = 1; i_14 < 19; i_14 += 3) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_16 = 2; i_16 < 20; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 3; i_17 < 19; i_17 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) (+((~((+(((/* implicit */int) arr_44 [i_16]))))))));
                            arr_52 [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned short)26371)) < (((/* implicit */int) arr_46 [i_17 - 3] [(unsigned short)19])))))) ? (min((((((/* implicit */_Bool) arr_45 [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_14] [i_16]))) : (15556971966128232983ULL))), (((/* implicit */unsigned long long int) min((arr_51 [i_14] [i_14] [i_14] [(signed char)0] [i_14 + 2] [4LL]), (arr_51 [12ULL] [(signed char)14] [i_14] [13ULL] [(_Bool)1] [(signed char)14])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_17] [i_14] [i_16] [(_Bool)0] [i_14] [i_17 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))) ? (((unsigned long long int) arr_49 [i_14])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)238)) > (((/* implicit */int) var_1))))))))));
                            var_26 = ((/* implicit */unsigned long long int) arr_47 [i_15] [(unsigned char)17]);
                            var_27 = ((/* implicit */int) (short)32767);
                            arr_53 [i_14] [i_14] [i_14] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [5ULL]))))) ? (((/* implicit */int) max((arr_46 [i_14] [i_14]), (((/* implicit */short) var_15))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)10)), ((unsigned short)65535))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) arr_59 [i_14] [i_14] [i_14] [i_19] [i_19] [17ULL])))));
                            arr_61 [i_14] [i_15] [8ULL] [i_18] [4U] [i_18] = ((/* implicit */unsigned short) ((unsigned long long int) ((_Bool) (_Bool)1)));
                        }
                    } 
                } 
            }
        } 
    } 
}
