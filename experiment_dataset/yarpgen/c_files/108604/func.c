/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108604
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) min((4192149516U), (((/* implicit */unsigned int) (short)18846))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_17 = ((signed char) (~(((/* implicit */int) arr_4 [i_1] [i_1]))));
                            var_18 = ((((long long int) var_8)) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_2 [i_3] [i_0] [i_0]))))));
                            var_19 &= ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_0 [i_3])) >> (((((/* implicit */int) ((short) (unsigned short)41188))) + (24362))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_0])), (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_3 [i_0] [i_1])));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) != (var_14)));
    /* LoopNest 3 */
    for (unsigned short i_4 = 2; i_4 < 19; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        arr_21 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31372)) ? (((/* implicit */int) (short)-18312)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((var_7) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_0)))));
                        var_22 = ((var_14) - (((((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_4] [i_7])), (var_6)))) & (((/* implicit */int) var_5)))));
                        arr_22 [i_4] [i_4] [i_4] [i_4] [i_7] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_12)) ? (-6820805122843810537LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18846)))))));
                        var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned short)57909))))), (arr_11 [i_6])));
                        arr_23 [i_4] [i_4] [i_4] [i_4] [i_6] [i_4] = ((/* implicit */short) (~(8281815220383157140LL)));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 4; i_9 < 18; i_9 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)13548)) >= (((/* implicit */int) (_Bool)1))));
                            var_25 |= (((!(((/* implicit */_Bool) arr_10 [i_9])))) || (((/* implicit */_Bool) var_0)));
                            var_26 = min((((((/* implicit */_Bool) arr_26 [i_5 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_26 [i_5 + 1])))), ((-(((/* implicit */int) (short)18312)))));
                        }
                        for (unsigned long long int i_10 = 4; i_10 < 18; i_10 += 2) /* same iter space */
                        {
                            arr_31 [i_4] [i_4] [i_6] [i_4] [i_4] [i_5 - 1] [i_4] = arr_29 [i_4] [i_4] [i_6] [i_4] [i_10];
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_12 [i_6] [i_6])), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34164))) / (-8281815220383157141LL)))))))))));
                            arr_32 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_5 + 2] [i_6])) ? (((/* implicit */int) arr_12 [i_4 + 2] [i_5 + 1])) : (((/* implicit */int) (short)26162)))) % (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_4] [i_5 - 1])) : (((/* implicit */int) arr_12 [i_8 + 1] [i_6]))))));
                            var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53407)) ? (-3892495840704901579LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 5749164500072752211ULL)))))) : (2345823974U)));
                        }
                        for (unsigned long long int i_11 = 4; i_11 < 18; i_11 += 2) /* same iter space */
                        {
                            var_29 = min((4294967292U), (((/* implicit */unsigned int) -538729297)));
                            arr_37 [i_4] [i_5 + 1] [i_4] [i_6] [i_4] [i_8 - 1] [i_11] = min((((/* implicit */short) (signed char)-64)), (arr_10 [i_4]));
                            arr_38 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_16 [i_4 - 2])) ? (arr_30 [i_4 - 2] [i_4] [i_8 + 1] [i_8 + 1] [i_11 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26163))))) >> (((/* implicit */int) ((var_8) <= (arr_19 [i_4 - 2] [i_4] [i_8 + 1] [i_4]))))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)18312)) ? (((/* implicit */int) ((short) 3U))) : (((/* implicit */int) (unsigned short)65535))));
                        }
                        arr_39 [i_4 - 2] [i_4 - 2] [i_4] [i_6] [i_8] [i_8] = ((/* implicit */int) min((var_4), (((/* implicit */unsigned long long int) ((unsigned int) (~(0U)))))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
                    {
                        var_31 = (~(((/* implicit */int) (unsigned char)4)));
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4]))))))));
                    }
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
                    {
                        arr_46 [i_4] [i_5] [i_5 + 1] [i_4] [i_13] = ((/* implicit */unsigned long long int) ((((long long int) (signed char)56)) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))))));
                        arr_47 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) / (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)17))))) : ((~(-8281815220383157130LL)))));
                    }
                    arr_48 [i_4] [i_4] [i_4] = ((long long int) min((var_8), (((/* implicit */int) arr_34 [i_4] [i_4 + 2] [i_4] [i_4] [i_4]))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        for (int i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (short)29475))) << (((((-2120507130) + (2120507153))) - (16))))))));
                                var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                                var_35 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (arr_28 [i_4] [i_4] [i_14] [i_14]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
