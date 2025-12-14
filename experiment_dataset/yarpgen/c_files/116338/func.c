/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116338
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) ((((((/* implicit */int) var_3)) >> (((6275219010179818539LL) - (6275219010179818524LL))))) % (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_2)) : (6391687541708538293LL)))))));
        var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)-31904)), (((((/* implicit */_Bool) (~(var_0)))) ? ((~(15ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((var_5) / (((/* implicit */long long int) -1)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) var_6);
                    var_20 = ((/* implicit */unsigned long long int) max((10), (((/* implicit */int) ((((unsigned int) arr_6 [i_2])) < (((/* implicit */unsigned int) arr_9 [i_4])))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_21 += ((/* implicit */int) (short)4094);
                        arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_0 [i_4] [i_2]);
                        var_22 = arr_4 [i_2] [i_4];
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        arr_17 [i_2] [i_6] [i_3] [i_3] [i_2] [i_6] = ((/* implicit */short) arr_5 [i_2]);
                        var_23 = ((/* implicit */int) (short)4094);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            var_24 = ((unsigned long long int) (short)1);
                            var_25 -= ((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8]);
                            var_26 = (+((~(((/* implicit */int) (short)-1)))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_27 ^= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_4] [i_9]))) != (arr_18 [i_2] [i_2] [i_4])))), (arr_18 [i_2] [i_2] [i_7])));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_7])) ? (max((((/* implicit */long long int) var_9)), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_4] [i_9])) || (((/* implicit */_Bool) var_13))))))))) && (((/* implicit */_Bool) (short)4081))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned long long int) (+(((unsigned int) (short)-4115))));
                            var_30 *= ((/* implicit */unsigned char) ((unsigned int) var_10));
                        }
                        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */short) (+(((/* implicit */int) (short)-4))));
                            var_32 = ((/* implicit */long long int) min((var_32), (min((((/* implicit */long long int) ((short) (short)4100))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (409690151763351448ULL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19704))) : (var_12)))))));
                            var_33 = ((/* implicit */unsigned long long int) arr_6 [i_2]);
                        }
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (var_8))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)255))) > (arr_23 [i_2] [i_2] [i_2] [i_3] [i_4] [i_7] [i_12])))))) <= (((int) var_12))));
                            var_34 -= ((/* implicit */unsigned int) var_6);
                        }
                        var_35 = ((/* implicit */unsigned int) (short)4);
                        var_36 = ((/* implicit */short) 4190893435U);
                    }
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned short) var_4);
    }
    /* LoopSeq 1 */
    for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
    {
        var_38 = ((/* implicit */short) ((8264843470916518665LL) / (-8264843470916518665LL)));
        var_39 = ((/* implicit */unsigned short) var_8);
        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((unsigned long long int) (short)0))));
        /* LoopNest 3 */
        for (short i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            for (unsigned short i_15 = 0; i_15 < 22; i_15 += 1) 
            {
                for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 18446744073709551606ULL))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531))))))) : (((int) var_3))));
                            var_42 = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_36 [i_16] [i_16] [i_16])), (arr_46 [i_14] [i_16] [i_15] [i_14] [i_13])));
                            arr_47 [i_15] [i_14] [i_15] [i_16] [i_14] = ((/* implicit */short) ((max((((/* implicit */unsigned int) var_8)), ((-(var_14))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-16856)) >= (((/* implicit */int) (signed char)-99))))))));
                            var_43 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((-(-1324181911))) : (((/* implicit */int) ((unsigned char) var_10)))))) / (((((((/* implicit */_Bool) arr_34 [i_15])) ? (886740936U) : (((/* implicit */unsigned int) arr_45 [i_15])))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)16856)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 1) /* same iter space */
                        {
                            var_44 = ((/* implicit */unsigned int) ((unsigned short) arr_35 [i_14] [i_18]));
                            var_45 = arr_49 [i_13] [i_13] [i_13] [i_13] [i_13];
                        }
                        for (short i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            arr_54 [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((signed char) min((var_4), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)52)), (arr_52 [i_19] [i_19])))))));
                            var_46 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)-4)), (((((/* implicit */_Bool) arr_42 [i_13])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                            var_47 = ((/* implicit */unsigned long long int) (+(arr_46 [i_13] [i_14] [i_15] [i_16] [i_19])));
                        }
                        arr_55 [i_15] [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_13])) && (((/* implicit */_Bool) (unsigned char)46))));
                        arr_56 [i_13] [i_13] [i_13] [i_13] [i_15] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16878)) ? (var_4) : (3592467597U)))) >= (((unsigned long long int) var_7)))));
                    }
                } 
            } 
        } 
        arr_57 [i_13] = ((/* implicit */unsigned short) max(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (var_10))))), (((/* implicit */unsigned long long int) var_12))));
    }
    var_48 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? ((~((-(((/* implicit */int) var_7)))))) : (((int) ((short) (unsigned char)26)))));
}
