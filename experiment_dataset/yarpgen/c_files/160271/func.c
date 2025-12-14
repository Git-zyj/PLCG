/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160271
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
    var_13 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_10)))) : ((-(((/* implicit */int) (short)-30303)))))), (((/* implicit */int) ((unsigned short) max((((/* implicit */short) var_10)), (var_2)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    arr_8 [i_0] [i_2] [i_2] [i_2 + 4] = ((/* implicit */short) (-2147483647 - 1));
                    arr_9 [i_2] [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_5 [i_2 + 2])) / ((-(((/* implicit */int) (unsigned char)106))))))));
                    var_14 = (signed char)122;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) ((unsigned short) (short)-16384));
                        arr_14 [i_0 - 1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) var_2);
                        arr_15 [i_0 - 1] [i_3] [i_3] [i_4] [i_0 - 1] = ((/* implicit */short) ((long long int) ((((/* implicit */int) (unsigned char)150)) >> (((((/* implicit */int) (short)-1794)) + (1795))))));
                    }
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_3] [i_3] [(unsigned short)12] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)-62))))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 540431955284459520LL)) ? (((/* implicit */int) (short)-1803)) : (arr_17 [i_0] [i_0 + 1] [i_3])));
                        arr_19 [i_5] [i_3] [i_3] [i_0] = ((/* implicit */long long int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]);
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (short)1794)) / (((/* implicit */int) (unsigned char)105)))))));
                    }
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0 + 1] [i_0] [19U] [19U] [i_0] [i_3] = ((((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_7))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
                        arr_24 [i_3] [i_1] [i_3] [i_6] = ((/* implicit */signed char) (unsigned short)61484);
                    }
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) > (((/* implicit */int) arr_2 [(unsigned char)17] [i_0 + 1])))))));
                }
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    arr_27 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */int) ((unsigned int) (unsigned short)29177));
                    var_19 = arr_13 [i_7] [i_0 - 1] [i_0 - 1] [i_0 + 1];
                    var_20 -= ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-11498))))) ? (((/* implicit */int) (unsigned char)143)) : (((((/* implicit */int) (short)30302)) ^ (((/* implicit */int) (short)30317)))))) <= (((/* implicit */int) (signed char)121))));
                    arr_28 [i_0] [i_0] [14] = ((/* implicit */short) max((max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) var_10)))), (((/* implicit */int) var_5))));
                    arr_29 [i_0] [(signed char)7] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [(signed char)7] [i_0 + 1]))));
                }
                arr_30 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)138);
                /* LoopNest 2 */
                for (short i_8 = 2; i_8 < 19; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (unsigned short)36385);
                            var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (short)30300)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_5))))))));
                            arr_35 [i_0] [i_1] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1])), (var_8)))) & (((arr_10 [i_8 - 2] [(short)4] [i_0 + 1] [i_0 - 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (((unsigned short) (unsigned short)29167))));
    /* LoopSeq 3 */
    for (signed char i_10 = 3; i_10 < 21; i_10 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            arr_42 [i_10] [i_10 - 2] [i_10] = ((/* implicit */unsigned int) var_6);
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)32)))), (((/* implicit */int) (_Bool)1))))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (var_3)))))))))));
            var_25 = ((/* implicit */unsigned int) var_1);
        }
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) < (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) 6154578481291973833LL)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)7)))) : (((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_45 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-48))))))) == (((unsigned int) (-(((/* implicit */int) (signed char)-24)))))));
        arr_46 [i_12] [i_12] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_3 [i_12])))) ? (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_9)))))) : ((~(((/* implicit */int) max((arr_0 [i_12] [i_12]), (var_5))))))));
        arr_47 [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_37 [i_12])) ? (((/* implicit */int) (unsigned short)49829)) : (((/* implicit */int) var_11)))) == (((((/* implicit */int) arr_37 [i_12])) ^ (((/* implicit */int) arr_37 [i_12]))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) (signed char)90)))), (((/* implicit */int) min((max((((/* implicit */short) (signed char)1)), ((short)8176))), (((/* implicit */short) ((signed char) 870688484U)))))))))));
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        var_28 = ((/* implicit */signed char) (_Bool)1);
        var_29 &= ((/* implicit */unsigned short) -575164818);
        arr_51 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))));
    }
}
