/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163454
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_16 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4057748752U)) ? (-3399621927539899428LL) : (((/* implicit */long long int) 4057748752U))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((arr_1 [i_0] [i_0]) | (((/* implicit */unsigned long long int) arr_0 [(unsigned char)13]))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((arr_1 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) 5331663659905987454LL)))) + (arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), ((+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4946296714265434699LL)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_2))))) ? (max((237218543U), (((/* implicit */unsigned int) var_2)))) : (min((var_0), (((/* implicit */unsigned int) (_Bool)1))))))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_1 [i_1 + 2] [i_2 + 1]))));
                    var_20 = ((/* implicit */signed char) ((_Bool) (-(arr_4 [i_1]))));
                    arr_7 [6U] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) || (arr_3 [i_1 + 1] [i_1]))) ? (((/* implicit */int) ((4946296714265434699LL) > (5331663659905987456LL)))) : (((((/* implicit */_Bool) 10595738421747930313ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31115))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */long long int) (_Bool)1);
        var_21 = ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_8 [i_3] [i_3]))) ? (min((arr_8 [i_3] [i_3]), (((/* implicit */long long int) arr_5 [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_3])))))));
        var_22 += ((/* implicit */unsigned int) max((((/* implicit */long long int) ((short) ((signed char) var_6)))), ((-(var_4)))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 12; i_5 += 2) 
            {
                {
                    var_23 ^= ((/* implicit */signed char) arr_14 [i_3] [10LL] [10LL]);
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((var_6), (arr_15 [i_5 - 1] [i_5 - 1] [i_4]))))) - (max((arr_8 [(unsigned char)2] [i_5 + 2]), (((/* implicit */long long int) (signed char)127))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_3] [i_3] [i_4] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 13654326611133851583ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (13654326611133851583ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_2))))))) ? (arr_21 [i_7] [i_4] [i_5 - 1] [6LL] [i_7] [i_5]) : (((((((/* implicit */_Bool) arr_13 [i_3] [i_7])) ? (-5331663659905987445LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_6]))))) % (((((/* implicit */_Bool) var_8)) ? (5331663659905987445LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3])))))))));
                                var_25 += ((/* implicit */long long int) ((_Bool) arr_0 [i_3]));
                                var_26 = (~(arr_23 [i_5 + 2] [i_4] [(_Bool)1] [i_5] [i_3] [i_4]));
                                var_27 = (-(min((((/* implicit */long long int) 4102201579U)), (2199023255424LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        arr_28 [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) >= (-3399621927539899428LL)));
        arr_29 [i_8] = ((/* implicit */unsigned short) -4162608337774307485LL);
        arr_30 [i_8] = ((((max((((/* implicit */unsigned int) arr_19 [i_8] [i_8] [i_8] [i_8] [i_8])), (534336888U))) + (2606465286U))) != (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (1998157682)))));
    }
    var_28 = ((/* implicit */short) ((var_2) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)69)) && (((/* implicit */_Bool) (unsigned char)255)))) || (((/* implicit */_Bool) (unsigned short)55032))))) : (((/* implicit */int) (!(var_6))))));
}
