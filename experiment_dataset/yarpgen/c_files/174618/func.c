/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174618
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
    var_13 = ((/* implicit */unsigned short) ((_Bool) var_11));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))));
        var_15 = ((/* implicit */short) ((((_Bool) var_9)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */short) (signed char)116)), ((short)-6182))))))) : (max((((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1270468614U))), (((/* implicit */unsigned int) var_1))))));
    }
    for (signed char i_1 = 4; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((min(((!(((/* implicit */_Bool) (unsigned short)8188)))), ((!(var_3))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65511)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) var_12))))) ? (max((((/* implicit */unsigned int) var_9)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-22866), (((/* implicit */short) (unsigned char)253)))))))) : (((/* implicit */unsigned int) max((1815591717), (((/* implicit */int) (unsigned char)0))))))))));
        var_17 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)1920)), ((unsigned short)37490)))) ? (((/* implicit */int) ((signed char) (unsigned short)65439))) : (((/* implicit */int) var_9))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_15 [(unsigned char)8] [i_3] [i_3] [i_5] [(unsigned short)10] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)27))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (6825578635886110948ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_7))))))) : (max((((/* implicit */unsigned long long int) (-(var_11)))), (max((((/* implicit */unsigned long long int) var_5)), (3678436889776149185ULL))))));
                                arr_16 [i_2 + 2] [i_2] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((var_7) ? (((/* implicit */int) (unsigned short)65449)) : (min((((/* implicit */int) (short)-22615)), (((((/* implicit */_Bool) (short)8863)) ? (((/* implicit */int) (unsigned short)35848)) : (919245600)))))));
                                var_18 = ((/* implicit */short) min((min((var_5), ((unsigned char)58))), (((/* implicit */unsigned char) var_3))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) (-((-((+(1497284112)))))));
                    var_20 &= ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)184)), (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)19)), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6223469453308706352LL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        arr_19 [i_2] [i_2 + 2] [i_3] [i_2] [(short)3] [(unsigned char)11] = ((/* implicit */unsigned int) ((short) var_6));
                        arr_20 [i_2] [i_2 - 1] [(unsigned char)12] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4288728365090674277ULL)) ? (-1033063262) : (((/* implicit */int) (short)24788))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-1920)) : (((/* implicit */int) (unsigned char)252)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)32409))))));
                    }
                    arr_21 [i_2] [i_3] [(short)15] = max((((/* implicit */unsigned long long int) (unsigned short)65442)), (0ULL));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (short)1919)) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (unsigned char)33))))) : (((((((/* implicit */int) (signed char)-95)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)33)) - (25))))))));
    /* LoopNest 2 */
    for (signed char i_8 = 2; i_8 < 13; i_8 += 3) 
    {
        for (long long int i_9 = 2; i_9 < 13; i_9 += 1) 
        {
            {
                var_22 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)113)) >> ((((+(((((/* implicit */int) (short)13844)) / (((/* implicit */int) (signed char)-125)))))) + (141)))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)94)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (2319442211582349689LL)))))) ? (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (unsigned short)65441)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)100)), (var_2)))))) : (((/* implicit */int) min((((_Bool) (unsigned short)16)), ((!(((/* implicit */_Bool) var_6)))))))));
                /* LoopSeq 2 */
                for (unsigned char i_10 = 2; i_10 < 10; i_10 += 1) /* same iter space */
                {
                    var_24 ^= ((/* implicit */short) min((((((/* implicit */long long int) (-(((/* implicit */int) (short)0))))) - (4596452655645979342LL))), (((/* implicit */long long int) (short)0))));
                    arr_30 [i_8] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-64)) - (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11612))) : (((((/* implicit */_Bool) 134217696U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (17964284196199919255ULL))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 13; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((int) ((short) 134217696U))), (((/* implicit */int) ((short) max((var_4), (((/* implicit */unsigned int) (unsigned short)55076)))))))))));
                                var_26 &= ((/* implicit */int) min((((/* implicit */unsigned int) var_3)), ((+(var_4)))));
                                var_27 = ((/* implicit */long long int) max(((~(((/* implicit */int) max(((_Bool)0), (var_7)))))), ((-(((/* implicit */int) max((var_0), (var_2))))))));
                            }
                        } 
                    } 
                    var_28 = max((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) max((var_11), (((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (17673823227271357921ULL))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (16060878544535497395ULL))))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (short)22245))) ? (min((((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (var_4))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))));
                }
                for (unsigned char i_13 = 2; i_13 < 10; i_13 += 1) /* same iter space */
                {
                    arr_39 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 1440522378U)) : (2385865529174054209ULL))))))));
                    arr_40 [i_8] [i_9] [(short)3] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -708037537)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) + (((((/* implicit */_Bool) (unsigned short)103)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37))) : (3824001475U))))));
                    var_30 = ((/* implicit */signed char) var_5);
                    var_31 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_6)))))));
                }
            }
        } 
    } 
}
