/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139263
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
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (short)32759)) == ((~(((/* implicit */int) var_0)))))));
                                var_16 = ((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_0)))) - (max(((-(((/* implicit */int) var_12)))), (((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    arr_11 [7ULL] = ((/* implicit */long long int) var_8);
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            for (long long int i_6 = 1; i_6 < 10; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        var_17 = ((/* implicit */long long int) (((~(-1829274358))) == (((/* implicit */int) ((short) var_1)))));
                        arr_21 [2LL] [2LL] [2LL] [i_5] = ((/* implicit */unsigned int) (short)21121);
                        arr_22 [i_5] [(short)9] [(_Bool)1] = ((/* implicit */_Bool) var_4);
                        var_18 = min((min((min((var_13), (var_5))), ((short)-32760))), (((/* implicit */short) var_12)));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_8 = 4; i_8 < 11; i_8 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)32730)) - (((/* implicit */int) (short)2032))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) - (536870908U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) var_0)))))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 536870908U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32762)))), (((/* implicit */int) min((var_2), ((_Bool)1)))))))));
        arr_26 [i_8] = ((/* implicit */unsigned short) min((min((arr_18 [i_8] [i_8] [2U]), (((/* implicit */long long int) (short)496)))), (((/* implicit */long long int) (~(7U))))));
    }
    var_20 |= ((/* implicit */_Bool) min((max((min((((/* implicit */unsigned int) var_5)), (4294967266U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) ^ (-210531853)))))), (((/* implicit */unsigned int) (short)-32756))));
    var_21 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((min((((((/* implicit */unsigned int) 151421192)) - (536870893U))), (((/* implicit */unsigned int) var_5)))) - (16114U)))));
    /* LoopNest 3 */
    for (short i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 1; i_10 < 16; i_10 += 4) 
        {
            for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) min((var_0), (((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned short)9699)))))))) : (-5939369551844110068LL)));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (_Bool)1))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                    {
                        arr_38 [i_10] [i_10] [i_10] [i_10] [i_9] = ((/* implicit */unsigned long long int) var_14);
                        arr_39 [7ULL] [i_9] [11U] [i_9] [i_9] [i_9] = ((/* implicit */int) 35184363700224LL);
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [10] [10] [i_10 - 1] [10] [10])))))));
                        arr_40 [i_9] [i_9] [i_9] [i_9] [13LL] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_10 - 1] [i_10 - 1] [i_10 - 1]))) != (var_4)));
                    }
                    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) min(((-((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_10))));
                        arr_44 [i_9] [i_9] [(_Bool)1] [i_9] = ((/* implicit */unsigned short) var_6);
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)112))) % (max((((/* implicit */long long int) min((var_6), (var_11)))), (max((((/* implicit */long long int) arr_34 [i_9] [i_9] [i_9])), (4828169185613402596LL))))))))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_35 [5U])) + (2147483647))) << (((5939369551844110068LL) - (5939369551844110068LL)))))) ? (((long long int) (short)29902)) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_9] [i_9] [i_9] [i_9] [i_9]))) : (3602939749U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((arr_33 [i_9] [i_9] [14U]) % (((/* implicit */unsigned long long int) var_1)))), ((+(var_8)))))));
                        arr_45 [i_9] [13] [7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min(((+(var_11))), (var_9)))) - (((((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_13))))) ? (1585154168891713730ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (var_9)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_14 = 1; i_14 < 18; i_14 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_2))) >> (((((arr_32 [8ULL] [(short)7] [i_9]) ? (((/* implicit */unsigned long long int) 2147483616U)) : (var_8))) - (2147483595ULL)))));
                        arr_49 [6U] &= ((((/* implicit */int) arr_47 [i_9] [i_10 - 1] [i_11] [i_10 - 1])) == (((/* implicit */int) var_10)));
                        /* LoopSeq 2 */
                        for (short i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((((unsigned int) var_4)) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 274877775872ULL)) ? (((/* implicit */int) (unsigned short)57077)) : (((/* implicit */int) (unsigned short)22343))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-11101)))) : ((~(16861589904817837886ULL)))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((unsigned long long int) ((var_11) != (arr_46 [i_9])))))));
                            var_32 &= ((/* implicit */_Bool) var_11);
                            var_33 = ((/* implicit */int) var_13);
                            var_34 = (!((!(((/* implicit */_Bool) 536870886U)))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) 151421213))));
                        }
                        var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_42 [17] [17]))))) <= (((arr_41 [i_9] [18] [(short)12] [i_9] [i_9]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        var_37 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                        var_38 = ((/* implicit */int) var_13);
                    }
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (+(((/* implicit */int) var_7))))))));
}
