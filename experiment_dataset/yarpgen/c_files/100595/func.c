/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100595
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
    var_11 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (123145302310912ULL)))) ? (((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) (unsigned short)40945)))));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) min((1740430524835092158LL), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (var_9)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 += ((/* implicit */_Bool) var_1);
                    var_14 = (+(((min((var_8), (var_8))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [12LL])) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((signed char) (unsigned short)452))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned long long int) -5418843733099692231LL);
                    arr_9 [i_1] = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    arr_16 [i_0] [14ULL] [i_3] [(unsigned char)14] &= ((/* implicit */unsigned short) max((max((((((/* implicit */unsigned long long int) var_10)) ^ (1163126253979196093ULL))), (((/* implicit */unsigned long long int) (unsigned short)30720)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5193)) ? (((long long int) (unsigned short)14534)) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)19856), (((/* implicit */unsigned short) var_4)))))))))));
                    var_15 = ((/* implicit */long long int) ((int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)46988)) ? (((/* implicit */int) var_4)) : (arr_12 [i_4] [i_4])))) - (max((var_0), (((/* implicit */long long int) var_10)))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) != (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) ? (max((((/* implicit */unsigned int) ((arr_14 [i_0] [i_0] [i_0] [20LL]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32256)))))), (((var_9) << (((((/* implicit */int) (unsigned short)21649)) - (21633))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0)))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((unsigned char) var_4)))))))))));
                    var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_10 [i_0] [i_0] [(signed char)18]))))) ? ((~(((unsigned int) var_4)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))))));
                    var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 576460752295034880LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)99))) : (71776119061217280LL))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) <= (((((((/* implicit */int) (signed char)-28)) + (2147483647))) >> (((((/* implicit */int) var_1)) + (147))))))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) max((((((unsigned long long int) 1822970587U)) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) ((unsigned int) var_6)))));
}
