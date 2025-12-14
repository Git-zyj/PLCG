/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146633
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) max((((unsigned long long int) arr_1 [i_0] [i_1 + 1])), (((/* implicit */unsigned long long int) var_7))));
                            arr_11 [i_1 + 1] [i_2] [i_2] [i_3 - 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 14602610169721586883ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (arr_7 [i_1 + 2]) : (((/* implicit */unsigned int) (+(arr_1 [i_3 + 2] [i_1 - 1]))))));
                            var_10 = ((/* implicit */unsigned short) (((_Bool)1) ? (3844133903987964723ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-2101)), ((unsigned short)10861))))) >= (2396774598043113275LL)))))));
                            arr_12 [i_0] [i_0] [i_0] [6] |= ((/* implicit */short) arr_3 [i_0] [(signed char)13]);
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 2])), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_1 + 1] [i_0] [i_1 + 1] [i_0] [i_0])), (arr_7 [i_1])))) ? (min((var_6), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((long long int) var_8)))))));
                arr_14 [13LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (max((arr_1 [i_1 - 1] [i_1 + 2]), (arr_1 [i_1 + 1] [i_1 - 1])))));
                /* LoopSeq 4 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_11 *= ((/* implicit */_Bool) ((((arr_6 [i_1 + 3] [i_1 + 1]) < (arr_6 [i_1 - 1] [i_1 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) (unsigned short)8192)) ? (var_4) : (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 + 3]))))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_12 = ((/* implicit */_Bool) var_2);
                        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
                        var_14 = ((/* implicit */unsigned char) (+(16468302762391914212ULL)));
                        var_15 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned char)0)))))))));
                        var_17 |= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-16361))))) ^ (((unsigned int) 14364929616182552097ULL)))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                    {
                        var_18 &= ((/* implicit */unsigned short) var_7);
                        arr_28 [i_0] [i_1] [i_4] [i_7] = ((/* implicit */int) min((max((arr_23 [i_1 + 3]), (arr_4 [i_1 + 3] [i_1 + 2]))), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
                        arr_29 [(_Bool)1] [(short)3] [(_Bool)1] [i_4] [(unsigned short)13] [i_0] = ((/* implicit */short) ((unsigned short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 1])) : (((/* implicit */int) var_7)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 14; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_17 [i_9] [i_9] [(unsigned char)14] [i_9]))))))), ((+(924436111))))))));
                                arr_35 [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)2075))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [12LL] [i_0] [i_0])))))) : (var_6)))) || (((/* implicit */_Bool) arr_2 [i_8]))));
                                var_20 = ((signed char) max((((/* implicit */unsigned long long int) arr_30 [i_8 - 1])), (var_4)));
                                var_21 = ((/* implicit */unsigned int) arr_8 [i_4] [i_1 - 1] [i_4] [i_8 + 1]);
                            }
                        } 
                    } 
                }
                for (short i_10 = 3; i_10 < 12; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 2; i_12 < 13; i_12 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_8))));
                                arr_43 [12ULL] [i_0] [i_10 - 3] [i_11] |= ((/* implicit */unsigned long long int) arr_19 [(_Bool)1]);
                            }
                        } 
                    } 
                    arr_44 [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 2) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 240500402U)) || (((/* implicit */_Bool) (signed char)94))));
                                var_24 = ((/* implicit */short) (~(((arr_3 [i_0] [i_0]) ? (((4081814457526999547ULL) | (15255408828663871681ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [14U] [i_1] [i_10 + 1] [i_13] [i_14] [i_14])))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)63952)), (2624064398U))))));
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_47 [i_0] [i_10 - 1]))))), (((unsigned long long int) arr_56 [i_0] [i_10 - 2] [i_10] [(signed char)2] [(short)9]))));
                                var_27 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14364929616182552090ULL)) ? (arr_8 [i_10] [i_0] [i_1] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) && ((_Bool)1)))), ((~(var_1))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_17 = 1; i_17 < 13; i_17 += 4) 
                {
                    arr_59 [i_0] [i_1] [(unsigned char)11] = ((/* implicit */unsigned int) ((var_4) < (((6917529027641081856ULL) << (((((/* implicit */int) (short)-2085)) + (2124)))))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3002966325854564645LL)) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5185256037519418926LL)) ? (((/* implicit */int) (short)2122)) : (((/* implicit */int) (unsigned short)19046))))), (4237773472U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3916521997579933217LL)))))))))));
                }
                for (long long int i_18 = 3; i_18 < 13; i_18 += 2) 
                {
                    var_29 &= ((/* implicit */unsigned short) ((unsigned long long int) max((-3431779306364727919LL), (((/* implicit */long long int) (short)23768)))));
                    arr_62 [(signed char)8] [i_1] [i_18] [7U] = ((/* implicit */unsigned char) max((((/* implicit */short) var_9)), ((short)-2124)));
                }
                arr_63 [5LL] [(signed char)10] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((max((var_1), (arr_24 [i_1 - 1] [i_1 + 1]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8))))))), (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (signed char)-37))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1 + 3]))) : (var_4)))));
            }
        } 
    } 
    var_30 = ((/* implicit */int) var_1);
    var_31 -= ((/* implicit */_Bool) var_7);
}
