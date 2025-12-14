/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117077
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_10))));
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_17 = ((((/* implicit */_Bool) -9062410269844649337LL)) ? (((/* implicit */unsigned long long int) -508716920)) : (max((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) & (4355317407075145929ULL))), (((/* implicit */unsigned long long int) 9062410269844649328LL)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_9 [i_3] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) ^ (((((/* implicit */_Bool) 9062410269844649337LL)) ? (-9062410269844649337LL) : (-9062410269844649329LL))))), (((/* implicit */long long int) ((short) var_9)))));
                        arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [9U] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 1]))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) == (-9062410269844649328LL)))) : (var_12)));
    }
    for (long long int i_4 = 3; i_4 < 15; i_4 += 2) 
    {
        arr_16 [i_4] = ((((/* implicit */_Bool) 11238913217860760216ULL)) ? (max((((/* implicit */long long int) (+(var_12)))), (((long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_3)), (arr_1 [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103))) : ((+(1739320932U)))))));
        var_18 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_4 [i_4 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_4])))) : ((-(9062410269844649336LL))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_19 ^= 1844774817;
        arr_21 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_1 [i_5] [i_5]))));
        var_20 ^= ((/* implicit */int) arr_1 [i_5] [i_5]);
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) + (var_4))))));
    }
    for (int i_6 = 1; i_6 < 19; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            for (long long int i_8 = 1; i_8 < 17; i_8 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_27 [i_6 + 1] [(_Bool)1] [i_8]))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (~(9062410269844649321LL)))) ? (((/* implicit */long long int) (~(((var_13) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))))) : (((long long int) arr_5 [i_6] [i_7] [i_8 + 1] [i_8])))))));
                    arr_29 [i_6 - 1] [(unsigned char)1] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1199610677)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) arr_25 [i_6] [i_8 + 3] [i_6])) : (((/* implicit */int) arr_25 [i_6] [i_8 + 3] [i_6]))))) : (((((/* implicit */_Bool) arr_8 [i_8 - 1] [i_8 - 1] [i_6 + 1])) ? (((/* implicit */long long int) -1680384644)) : (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (9062410269844649328LL)))))));
                }
            } 
        } 
        var_24 ^= ((/* implicit */unsigned char) (signed char)-110);
        arr_30 [i_6] = ((/* implicit */_Bool) max(((+(((arr_25 [i_6] [i_6] [i_6]) ? (arr_26 [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6 - 1] [i_6]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((9062410269844649327LL), (-9223372036854775802LL)))))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_6] [i_6 + 1] [9])) ? (((arr_22 [i_6] [i_6]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_10), (var_3)))) - (((/* implicit */int) var_6)))))));
    }
}
