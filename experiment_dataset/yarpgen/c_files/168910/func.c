/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168910
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (15061919781768150328ULL)));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) 15061919781768150328ULL)) ? (705666428U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68))))))));
                        var_18 &= ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (arr_8 [i_3 - 2]));
                        var_19 = ((/* implicit */unsigned short) ((15061919781768150328ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13345)))));
                        arr_12 [(_Bool)1] [10LL] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((arr_3 [i_2 + 2]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (short)2214)) : (((/* implicit */int) arr_9 [i_0]))))) : (var_14)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 1; i_4 < 8; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 3; i_5 < 7; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-16071)) || (((/* implicit */_Bool) (signed char)127))));
                        var_21 -= ((/* implicit */_Bool) 3384824291941401287ULL);
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7LL)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)-13346)) : (((/* implicit */int) (short)13346)))) : (((/* implicit */int) (signed char)-68))));
                        var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_6])) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4]))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)10153)) : (((/* implicit */int) (signed char)68))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_4 - 1]));
        var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_10 [i_4 + 2] [i_4] [i_4] [i_4 + 2] [3U]))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    {
                        arr_31 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)13345)) & (((/* implicit */int) (short)0))));
                        var_27 = ((/* implicit */int) ((unsigned int) (short)13346));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_8])) - (((/* implicit */int) (signed char)-69)))))));
    }
    var_29 = var_1;
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) -8348364349205056242LL)) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) (unsigned char)156)))))))) ? (((unsigned long long int) ((-4941151063994377446LL) + (((/* implicit */long long int) ((/* implicit */int) (short)24995)))))) : (((/* implicit */unsigned long long int) var_14))));
    var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)13326)) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) 8787365348203593066ULL)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (short)-28359))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1450113469)) ? (((/* implicit */int) (short)-24996)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (var_0)))))));
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 18; i_12 += 3) 
    {
        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
        {
            {
                arr_37 [i_12] [4U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((3674813497U), (((/* implicit */unsigned int) (signed char)-68))))) ? (((((/* implicit */long long int) var_9)) & (arr_36 [i_13] [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) min((((min((var_3), (((/* implicit */long long int) var_4)))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_12] [i_12]))))), (((/* implicit */long long int) (short)-27372)))))));
            }
        } 
    } 
}
