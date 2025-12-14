/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189295
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [(signed char)12] &= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_0 [16] [16])) ? (((/* implicit */int) arr_0 [6] [i_0])) : (((/* implicit */int) var_7)))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            arr_6 [4ULL] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_2)))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            var_12 += ((/* implicit */unsigned char) (_Bool)1);
            var_13 += ((/* implicit */signed char) (-(arr_8 [i_0])));
            var_14 = ((/* implicit */unsigned short) max((var_14), (var_2)));
            arr_9 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)20969)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44575))) : (18446744073709551598ULL)))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
        {
            var_15 = ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)240)) && (((/* implicit */_Bool) var_10)))))))) != (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((6006588330969856750ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))))));
            var_16 = ((/* implicit */_Bool) min((var_16), ((!(((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) var_0))))))))));
            var_17 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14559))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    {
                        var_18 -= ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_13 [(short)19])))))));
                        var_19 = ((/* implicit */int) var_9);
                        var_20 = (+((+((-(-967773739))))));
                        var_21 -= ((/* implicit */unsigned int) (+((~(((/* implicit */int) max(((signed char)110), (arr_12 [i_4] [i_4]))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) var_5);
            arr_18 [i_0] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_15 [i_0]))))));
        }
        var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)44567)))), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_15 [(unsigned short)5])) + (22216)))))))), (((unsigned int) (~(((/* implicit */int) var_4)))))));
        var_24 |= ((/* implicit */int) ((arr_8 [i_0]) == (((/* implicit */unsigned int) min(((((_Bool)1) ? (-1197759748) : (((/* implicit */int) (unsigned char)7)))), (((/* implicit */int) (unsigned char)230)))))));
    }
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        arr_21 [i_7] = ((/* implicit */short) ((max((((6006588330969856743ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110))))), (((/* implicit */unsigned long long int) (unsigned short)127)))) >= (((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned long long int) 1042114038U)) : (8225097987773417560ULL)))));
        var_25 += ((/* implicit */unsigned long long int) var_8);
        var_26 = ((/* implicit */unsigned char) (((+((+(((/* implicit */int) (_Bool)1)))))) < ((~(((/* implicit */int) arr_20 [i_7] [i_7]))))));
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 20; i_8 += 1) 
    {
        for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            {
                arr_28 [i_8 - 1] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)44567)) ? (-1859425648) : (((/* implicit */int) (unsigned char)132)))) == (((/* implicit */int) min((((/* implicit */short) var_4)), (var_6))))));
                var_27 = ((/* implicit */unsigned int) (+(arr_27 [i_8])));
            }
        } 
    } 
}
