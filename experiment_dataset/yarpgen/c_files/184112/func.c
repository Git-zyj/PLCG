/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184112
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_19 = ((((min((((/* implicit */long long int) arr_0 [i_0] [i_1])), (var_0))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3])))))) ? (arr_3 [i_0]) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) (short)-19913)) : (((/* implicit */int) (short)-19902))))))));
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)9)) >= (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3])))) && (((/* implicit */_Bool) (unsigned short)2578))))), (max((((/* implicit */long long int) (~(2716262549U)))), ((~(-7484769477319337434LL)))))));
                        arr_9 [i_0] = ((/* implicit */_Bool) arr_6 [i_1] [i_0]);
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned long long int) 604908220);
        arr_11 [i_0] [i_0] = arr_7 [i_0];
        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [i_0] [(unsigned short)0]), (((/* implicit */unsigned int) arr_3 [i_0]))))) && (((/* implicit */_Bool) 4294967295U)))))));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) min((((((/* implicit */long long int) var_4)) > (arr_13 [i_4]))), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_14 [i_4] [i_4])))))))));
        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 262388329)) ? (max((((/* implicit */unsigned long long int) (~(1904083396U)))), (((((/* implicit */_Bool) 13U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) : (8195181317345694219ULL))))) : (((/* implicit */unsigned long long int) min((-588768680770751373LL), (((/* implicit */long long int) (_Bool)1)))))));
    }
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */_Bool) min((max((arr_13 [i_5]), (((/* implicit */long long int) arr_14 [i_5] [i_5])))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((-2057346318) <= (-2057346316)))), (((unsigned int) (signed char)-37)))))));
        var_23 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((signed char) arr_12 [i_5]))) < (((-2147483638) / (((/* implicit */int) (short)-5264)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) & (4294967263U))))))));
        arr_19 [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-45))) & (var_2))) >= (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_5])))))));
    }
    for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        arr_22 [i_6] &= ((/* implicit */unsigned int) arr_21 [i_6]);
        arr_23 [i_6] = ((/* implicit */unsigned char) arr_21 [i_6]);
    }
    var_24 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        for (int i_8 = 1; i_8 < 11; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    arr_31 [i_7] [i_7] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_6)));
                    var_25 = ((/* implicit */short) (signed char)-119);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_17) : (min((((/* implicit */unsigned int) (unsigned char)111)), (((((/* implicit */_Bool) var_7)) ? (734855256U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))));
}
