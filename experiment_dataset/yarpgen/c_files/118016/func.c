/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118016
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_10 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0]);
                        arr_12 [i_0] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */long long int) arr_1 [i_0 - 1])) / (-3719128131064500582LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 1]))) <= (var_5)))))));
                        arr_13 [i_0] [i_0] = ((/* implicit */int) var_14);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 2; i_5 < 18; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 3) 
                {
                    {
                        arr_21 [i_4] [3] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned int) (-(-8346526967830901016LL)));
                        arr_22 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) -564862959)) ? (arr_7 [i_6 - 1] [i_5 - 2] [i_0 - 2] [i_0]) : (((/* implicit */unsigned int) arr_17 [i_0])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_4])))))));
                    }
                } 
            } 
            arr_23 [i_0] [i_4] [i_4] = ((/* implicit */short) min((1683027562U), (((/* implicit */unsigned int) -1735911421))));
        }
        arr_24 [17U] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [0U] [i_0] [i_0 + 2]))) : (var_5)))) && (var_3)));
    }
    for (unsigned int i_7 = 2; i_7 < 18; i_7 += 2) /* same iter space */
    {
        arr_28 [i_7] [i_7] &= ((/* implicit */_Bool) max((8192U), (4294959110U)));
        arr_29 [i_7] = (~(min((arr_3 [i_7 + 1]), (arr_3 [i_7 + 2]))));
        /* LoopSeq 1 */
        for (int i_8 = 1; i_8 < 20; i_8 += 2) 
        {
            arr_33 [i_8] [9] [i_8] = ((/* implicit */long long int) ((((var_12) >= (((/* implicit */unsigned long long int) arr_31 [i_8])))) ? (536429828U) : (min((3467582185U), (((/* implicit */unsigned int) var_11))))));
            arr_34 [i_8] [i_8] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 15U))))), (max((1683027547U), (((/* implicit */unsigned int) ((536429811U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
            arr_35 [i_8] [i_8] = (+(((((3758537485U) / (((/* implicit */unsigned int) 1735911429)))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))))));
            /* LoopSeq 3 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                arr_39 [i_8] [(_Bool)1] [i_8] = (-(((/* implicit */int) (unsigned char)47)));
                arr_40 [i_7] [i_8 - 1] [i_7] |= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_30 [i_9 + 1])) ^ (8190U)))) ? (((/* implicit */long long int) min((2120646993U), (((/* implicit */unsigned int) (unsigned char)117))))) : ((~(4069290648134336046LL))));
                arr_41 [i_8] [i_8] [i_9] [i_7] = ((((/* implicit */_Bool) (+(var_14)))) ? (var_17) : (min((1577818263U), (((/* implicit */unsigned int) var_9)))));
            }
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                arr_46 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (short)6138);
                arr_47 [i_7] [i_7] [i_7] [i_7] &= min((((/* implicit */long long int) max((2396561442U), (((/* implicit */unsigned int) (_Bool)1))))), (9223372036854775798LL));
                arr_48 [i_10] [i_8] [i_8] [i_7] = ((/* implicit */int) min((((/* implicit */long long int) ((int) 6351676801698161001LL))), (((long long int) -4069290648134336066LL))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_52 [i_8] [i_8] = ((/* implicit */unsigned int) 140733193388032ULL);
                arr_53 [i_11] [i_8] [i_7] = ((/* implicit */unsigned int) max((max((18446603340516163595ULL), (((/* implicit */unsigned long long int) (unsigned char)117)))), (var_12)));
                arr_54 [i_8] [i_7] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4069290648134336038LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_11] [i_8] [i_8] [i_7])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((-4069290648134336030LL), (-590868122974294679LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0))))));
            }
        }
    }
    var_18 = ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (long long int i_12 = 4; i_12 < 15; i_12 += 3) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (short i_14 = 1; i_14 < 17; i_14 += 3) 
            {
                {
                    arr_62 [i_12] [i_12] [i_12] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_30 [i_12]))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_1))));
                    arr_63 [i_12] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) (short)32767))))), (min((((/* implicit */long long int) (short)16)), (-590868122974294688LL)))));
                    arr_64 [(_Bool)0] [(_Bool)0] = ((/* implicit */unsigned long long int) ((_Bool) ((arr_18 [i_12 - 1] [i_14] [(_Bool)1] [i_14 + 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_12] [i_13] [0U] [i_14 + 1])))));
                    arr_65 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) 14197622391411833734ULL);
                    arr_66 [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_12 - 4] [i_12 - 4])))))) : (min((((/* implicit */unsigned int) max(((short)32767), ((short)-17165)))), (var_15)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_16), (var_4)));
    var_20 = ((/* implicit */_Bool) 1951568350U);
}
