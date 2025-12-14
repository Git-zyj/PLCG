/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15855
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_20 &= ((/* implicit */long long int) (signed char)-2);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) var_19)))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (~((~(-197163968)))));
                }
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_22 = (+(arr_5 [i_3] [i_3] [i_0]));
            arr_10 [i_0] [i_0] = ((/* implicit */long long int) (+(((var_18) | (((/* implicit */int) var_9))))));
        }
        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            arr_14 [i_0] = ((/* implicit */signed char) ((((var_8) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))))) - (((/* implicit */long long int) var_14))));
            var_23 = ((/* implicit */unsigned int) ((int) min((var_7), (arr_0 [i_4] [i_0]))));
        }
        for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                arr_19 [i_5] = ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-2)) + (var_4)))) ? (4294967295U) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_12))))) >> (((((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-9)) ^ (1711077026)))) : (var_12))) - (2583890260U))));
                arr_20 [i_5] = ((((/* implicit */_Bool) max((arr_17 [i_0] [i_5]), (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 531312021747130992LL)) || (((/* implicit */_Bool) 4294967289U)))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_5] [i_6])) ? (4186058517U) : (((/* implicit */unsigned int) arr_17 [i_0] [i_5])))));
            }
            var_24 ^= ((/* implicit */long long int) ((int) 161069197U));
            arr_21 [i_0] [14] [i_5] = ((((/* implicit */_Bool) max((131040U), (((/* implicit */unsigned int) var_10))))) ? ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_3)) : (4294967272U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-52)))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        {
                            var_25 ^= ((161069197U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))));
                            var_26 = arr_6 [i_0] [(signed char)10] [9];
                        }
                    } 
                } 
            } 
        }
        for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            arr_34 [i_0] |= ((/* implicit */unsigned int) -1);
            arr_35 [i_0] [i_10] &= ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (4294967289U) : (((/* implicit */unsigned int) var_4)))))))), (var_5)));
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((long long int) (unsigned char)255))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_10] [11])) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (unsigned char)58))))), ((+(var_17))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5783883850167808377LL)) ? (arr_32 [i_11] [i_12]) : (919753927)))) ? (var_3) : (var_4))))));
                            arr_43 [i_0] [i_0] [i_0] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_13])) ? (((((/* implicit */_Bool) 3520866130U)) ? (arr_12 [i_13] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_13]))))) : (max((arr_12 [i_12] [i_13]), (((/* implicit */long long int) arr_42 [i_13]))))));
                            var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (min((-87492562), (var_1))) : (((((/* implicit */_Bool) 1190805751)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (unsigned char)48)))))) <= (((/* implicit */int) ((max((((/* implicit */unsigned int) var_11)), (4294967254U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 531312021747130992LL)) ? (-747072545) : (-160861894)))))))));
                            arr_44 [i_0] [i_0] [i_13] [i_12] [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */long long int) (-2147483647 - 1))) % (5951188683936117733LL)));
                            var_29 = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((~(arr_3 [i_0] [i_11]))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) 321084768)) ? (arr_26 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */int) var_9)))))))));
                var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_6))))))));
                arr_45 [i_0] [i_10] [i_10] [i_10] |= ((signed char) max((((((/* implicit */_Bool) 2048806433U)) ? (arr_32 [i_0] [i_11]) : (var_10))), (var_18)));
            }
            for (unsigned int i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 15; i_16 += 1) 
                    {
                        {
                            arr_54 [i_14] = max(((+(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) (signed char)0)));
                            arr_55 [i_0] [8U] [i_14] &= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), (-1)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (unsigned char)112)))))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_12)) ? (arr_37 [i_0] [i_10] [i_10]) : (2944816630U)))));
                var_33 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 893175432)) ? (arr_3 [i_0] [i_10]) : (((/* implicit */long long int) arr_37 [i_14] [i_10] [i_0]))))) ? ((~(var_8))) : (((((/* implicit */long long int) var_16)) & (arr_3 [i_0] [i_14])))));
            }
        }
        arr_56 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_1)) : (max((var_12), (var_0)))))) > (max((((long long int) arr_6 [i_0] [i_0] [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) 897352781)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [8LL])) : (((/* implicit */int) (signed char)-61)))))))));
    }
    for (unsigned int i_17 = 0; i_17 < 12; i_17 += 1) 
    {
        arr_60 [i_17] = ((/* implicit */int) max((max((4294967289U), (((/* implicit */unsigned int) (unsigned char)61)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [i_17])))))));
        var_34 = ((/* implicit */int) var_2);
        arr_61 [i_17] [i_17] = ((/* implicit */signed char) var_19);
        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) 2567857508U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((signed char) -1608503100))))) : (((((unsigned int) arr_48 [i_17] [i_17] [i_17] [5])) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_14)))))))))));
        var_36 = var_19;
    }
    var_37 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))))) ? (max((((/* implicit */unsigned int) 587914186)), (((((/* implicit */_Bool) 4294967295U)) ? (2833292542U) : (3566056568U))))) : (((((/* implicit */_Bool) 2118231729U)) ? (1727109788U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))))));
}
