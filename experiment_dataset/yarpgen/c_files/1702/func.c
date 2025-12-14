/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1702
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
    var_17 = var_2;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 += ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_5 [(unsigned short)8] [i_1] [i_1] |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0]))))));
            arr_6 [i_0] = ((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1] [i_1]);
            var_19 -= ((/* implicit */unsigned char) var_5);
            var_20 = ((/* implicit */unsigned long long int) (-(1141219322U)));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) ((unsigned long long int) 3153747974U));
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((1141219345U) < (3153747944U)));
            }
        }
        for (unsigned int i_3 = 3; i_3 < 7; i_3 += 1) 
        {
            arr_14 [i_3] = ((4992327129144296052LL) < (((/* implicit */long long int) (~(arr_12 [i_0] [i_0])))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((3153747983U) > (3962072514U))))) + ((+(3871028379U))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        arr_19 [i_0] [i_4] [i_0] [2U] [i_5] [i_5] &= ((/* implicit */int) 1141219327U);
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0])))))) : (((((/* implicit */_Bool) -1985185270)) ? (((/* implicit */long long int) 1141219312U)) : (4992327129144296031LL))))))));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (-7515781840292974382LL))))) | (2457825543012629832LL))))));
                    }
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            arr_24 [i_0] [i_6] [8LL] = ((/* implicit */short) ((arr_22 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0])))));
            /* LoopNest 2 */
            for (signed char i_7 = 2; i_7 < 6; i_7 += 2) 
            {
                for (short i_8 = 3; i_8 < 8; i_8 += 1) 
                {
                    {
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56867))) : (3893469577U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))));
                        arr_29 [i_0] [i_6] [5U] &= ((((/* implicit */_Bool) (~(5260855928082408819LL)))) ? (((/* implicit */long long int) ((unsigned int) 1600753508))) : ((((_Bool)1) ? (4992327129144296054LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_8 - 1]))))));
                        arr_30 [i_7 + 1] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_1);
                    }
                } 
            } 
            arr_31 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_6]))));
        }
        /* LoopSeq 3 */
        for (int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) (!(((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_10] [i_11])))))));
                        arr_40 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)32729))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                for (int i_13 = 1; i_13 < 9; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        {
                            arr_49 [i_14] [4LL] [i_14] [i_0] [i_13] [i_12] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_9] [i_12] [i_13] [i_14])) ? (((((/* implicit */_Bool) var_0)) ? (arr_38 [8LL] [i_9] [i_12] [8LL]) : (((/* implicit */int) arr_17 [i_0] [i_9] [i_12] [i_13] [i_13] [i_14])))) : (((/* implicit */int) arr_46 [i_13 + 1] [i_13] [i_14] [i_13]))));
                            arr_50 [(unsigned char)2] [i_13] [i_12] [i_13 + 1] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (((((/* implicit */_Bool) arr_0 [9LL])) ? (var_10) : (((/* implicit */long long int) var_12))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
        {
            arr_54 [i_0] [i_0] [i_15] = (i_15 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) >> (((((/* implicit */int) arr_46 [i_0] [i_15] [i_15] [5U])) - (170)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1985185291)) != (0U))))) : (arr_28 [i_0] [i_15] [i_0] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) >> (((((((/* implicit */int) arr_46 [i_0] [i_15] [i_15] [5U])) - (170))) + (48)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1985185291)) != (0U))))) : (arr_28 [i_0] [i_15] [i_0] [i_0]))));
            var_26 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */int) var_13))))) && (((/* implicit */_Bool) arr_37 [i_0] [i_15]))));
        }
        for (unsigned short i_16 = 1; i_16 < 6; i_16 += 1) 
        {
            var_27 |= ((/* implicit */int) ((var_15) != (((/* implicit */int) arr_55 [i_0] [i_0]))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_1))) * (((/* implicit */int) ((unsigned char) var_0)))));
        }
        var_29 = ((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) 2832442440U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_36 [i_0] [i_0] [i_0] [(unsigned short)1])))));
    }
}
