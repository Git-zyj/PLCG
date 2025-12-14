/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172399
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (1187161044U)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), ((+(var_8)))))) : ((+(((((/* implicit */_Bool) var_10)) ? (9263994741671420176ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_9)))) ? (max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_11)) ? (arr_5 [(short)1] [i_2]) : (((/* implicit */long long int) var_14)))))) : (((/* implicit */long long int) (+(var_8))))));
                        arr_9 [i_2] [i_1] [i_1] [(signed char)15] [(signed char)14] [(signed char)14] = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) var_2))))), (max((((/* implicit */long long int) var_5)), (arr_5 [i_0] [(unsigned short)6])))));
                        arr_10 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) var_10))))), (((/* implicit */int) var_10))));
                    }
                } 
            } 
            arr_11 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((var_7) != (((/* implicit */unsigned int) var_14)))))) == (((var_5) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((signed char) (signed char)107)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_4 = 3; i_4 < 17; i_4 += 4) 
            {
                arr_14 [i_0] = ((/* implicit */unsigned short) -1088565596);
                arr_15 [i_0] [i_1] [(short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4950279623775809574LL)) ? (((/* implicit */int) arr_3 [i_4 + 1])) : (((/* implicit */int) var_4))));
            }
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_0] [i_5 + 1] = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */long long int) (signed char)-122)), (6408361238369132315LL))));
            arr_19 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */long long int) arr_17 [i_0]))))) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (1796022472)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)104))))) : ((+(var_8)))))));
            arr_20 [(unsigned short)8] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3265532505U)) ? (((/* implicit */long long int) var_3)) : (-994835500827255905LL)))) ? (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3234))) : (arr_16 [i_5 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (7531301573490462329LL)))))));
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_5))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                var_18 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))) - (0U)));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) var_13)))))));
                var_20 = ((/* implicit */long long int) ((var_1) > (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 3; i_8 < 19; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        {
                            arr_32 [i_6] [i_6 + 1] [i_6] [i_8 - 3] [i_9] = ((/* implicit */int) var_13);
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_12 [i_0] [i_6] [i_6] [i_0]))));
                        }
                    } 
                } 
                arr_33 [i_6] [(unsigned char)16] [(_Bool)1] = ((7531301573490462323LL) != (((/* implicit */long long int) (+(((/* implicit */int) var_13))))));
            }
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    for (int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_1))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40497))) * (2778866912U)));
                        }
                    } 
                } 
                arr_40 [i_0] [i_6] [i_6] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (var_7)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
            }
            var_24 &= ((/* implicit */unsigned char) arr_27 [(_Bool)1] [i_6] [i_0] [i_6]);
        }
        var_25 |= ((/* implicit */int) var_3);
    }
    for (long long int i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_4))));
        arr_45 [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3734240222873573485LL)) || (((/* implicit */_Bool) (signed char)-104))));
        var_27 = ((/* implicit */int) var_12);
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 25; i_14 += 1) /* same iter space */
    {
        arr_49 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_14] [i_14])) ? (((/* implicit */int) arr_43 [24])) : (var_0)));
        arr_50 [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) == (arr_48 [i_14] [i_14])));
    }
}
