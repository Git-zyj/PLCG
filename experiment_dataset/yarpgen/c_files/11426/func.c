/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11426
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)22030)) : (-825673209))))) : (((/* implicit */int) ((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_6))))))))));
    var_20 = ((/* implicit */unsigned int) min((((unsigned long long int) min(((short)3072), (((/* implicit */short) var_13))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (2828497879U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) ? ((+(var_16))) : (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) (unsigned short)55110)) : (((/* implicit */int) (unsigned char)10))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) (short)32763);
                arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)11623))));
                var_22 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [12U] [i_1])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [(_Bool)0])) <= (arr_2 [9U] [i_1])))))));
                arr_9 [i_0 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_0 + 2]))) : (var_3))))))) != (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) (unsigned char)183)))))));
            }
        } 
    } 
    var_23 = var_14;
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_24 += ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_11 [i_2])) ? ((-(((/* implicit */int) arr_11 [i_2])))) : (((((/* implicit */_Bool) -321596061455031816LL)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2])))))));
        var_25 += ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)73)), (2828497879U)))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-95)), (arr_11 [i_2])))) : ((~(((/* implicit */int) var_17)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_26 += ((/* implicit */unsigned short) arr_14 [i_3]);
            var_27 = ((/* implicit */unsigned short) var_17);
            var_28 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_11 [i_3]))))) + (arr_14 [i_2])));
            var_29 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4286504208668273969ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_16))) > (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
            var_30 += ((/* implicit */unsigned char) (((!(var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_14 [i_3])));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            arr_19 [i_4] [(_Bool)1] [(unsigned short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (0ULL)));
            arr_20 [i_2] [i_2] = ((/* implicit */long long int) arr_15 [i_4]);
            var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_2])) ? (((unsigned int) var_8)) : (0U)));
        }
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            arr_25 [i_5] [i_2] = ((/* implicit */long long int) min((14160239865041277646ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (20U))))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 4; i_6 < 23; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_28 [(short)4] [4ULL] [i_6 - 3])) && (((/* implicit */_Bool) arr_12 [i_2])))) ? (min((var_3), (arr_12 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_12 [i_5]))))));
                        var_33 = (short)32759;
                        arr_31 [i_6] [17ULL] [i_6] [i_6 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [(signed char)0] [i_6 - 4] [0ULL]))))) ? (((((/* implicit */_Bool) arr_17 [i_6 - 4] [i_5] [i_2])) ? (((/* implicit */int) arr_27 [i_6 - 4])) : (((/* implicit */int) arr_17 [i_6 - 4] [i_2] [i_2])))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_7])) || (((/* implicit */_Bool) var_12)))))))));
                        arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -321596061455031816LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4286504208668273969ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (var_9))))) : (arr_16 [i_2] [i_6 - 3] [i_6 - 3])))) & (min((((/* implicit */long long int) arr_28 [i_6 + 2] [i_6 - 1] [i_6 - 1])), (arr_30 [i_6 + 2] [i_6 - 3] [i_6 + 1] [i_6])))));
                        arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_14 [i_5]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_41 [i_9] [(unsigned short)0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_11 [i_5]))))), (arr_12 [i_8])))) && (((/* implicit */_Bool) arr_24 [(unsigned char)9]))));
                        arr_42 [i_9] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_9]))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            for (unsigned char i_11 = 4; i_11 < 23; i_11 += 4) 
            {
                for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    {
                        arr_49 [i_2] [i_2] [(short)7] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (2828497879U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_11 - 1] [i_11 - 3] [i_11 - 1]))))) >> (((/* implicit */int) min((arr_37 [i_11 + 2] [i_11 - 3] [i_11 - 1]), (arr_37 [i_11 - 1] [i_11 - 2] [i_11 - 3]))))));
                        arr_50 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_44 [i_2] [i_2])) : (((/* implicit */int) arr_39 [7LL] [i_11] [7LL] [i_2]))))) ? (((((/* implicit */_Bool) var_17)) ? (3656425950U) : (arr_38 [i_11 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_13)), ((signed char)-25)))))))) ? (((/* implicit */long long int) var_16)) : (min((((/* implicit */long long int) (+(((/* implicit */int) arr_48 [i_12] [i_11 + 2] [i_10] [i_2]))))), (min((arr_12 [i_2]), (((/* implicit */long long int) arr_39 [i_2] [i_10] [i_11] [2LL]))))))));
                    }
                } 
            } 
        } 
    }
}
