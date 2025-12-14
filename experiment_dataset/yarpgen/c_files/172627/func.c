/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172627
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
    var_10 &= ((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)214)), (var_0)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 1; i_2 < 22; i_2 += 4) /* same iter space */
            {
                var_11 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)205))));
                arr_8 [18] [i_2] [18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_6 [i_2 - 1] [0])))) ? (((/* implicit */long long int) arr_6 [i_2 - 1] [i_2 + 1])) : (arr_0 [i_2 - 1])));
            }
            for (signed char i_3 = 1; i_3 < 22; i_3 += 4) /* same iter space */
            {
                var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                var_13 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_3 - 1] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_7 [(short)20] [i_1] [i_1] [14LL]))))));
                var_14 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_1] [i_0]);
            }
            for (signed char i_4 = 1; i_4 < 22; i_4 += 4) /* same iter space */
            {
                var_15 = min((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)41)), (arr_9 [i_4 + 1] [i_1])))), ((+(((/* implicit */int) (unsigned char)205)))));
                var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_3 [i_4 + 2] [i_4 + 3])) ? (var_0) : (arr_0 [i_4 + 3])))));
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)42)), (arr_12 [i_5] [i_0] [i_0])))))))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min(((_Bool)0), ((_Bool)0))))));
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) min(((signed char)-36), ((signed char)125)))), ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)26361))))))));
                    var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned short)1)))), (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) (+((((_Bool)0) ? (arr_10 [i_4] [(short)4] [i_4 - 1]) : (arr_1 [i_5])))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) * (arr_0 [i_4 - 1])))));
                }
                /* vectorizable */
                for (long long int i_6 = 1; i_6 < 23; i_6 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)214)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (var_4)))))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7479)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-16)) : (arr_16 [i_0] [(unsigned char)5] [(unsigned char)5] [(signed char)6] [i_4 - 1] [i_6 + 1]))) : (var_5))))));
                    var_23 = (short)-26197;
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    arr_21 [i_4] [i_4] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [(unsigned char)3] [i_1] [i_4])) | ((-(arr_18 [4] [i_4] [i_4])))));
                    arr_22 [i_4] [i_1] [17] = (signed char)21;
                    arr_23 [i_0] [i_0] [i_4] [(unsigned short)23] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_17 [i_4]))));
                    var_24 += ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_1] [i_4 + 1] [i_4 + 1])) << (((((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0])) - (124)))));
                    var_25 = (short)26180;
                }
            }
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((((/* implicit */long long int) (unsigned short)65535)), (((max((var_0), (((/* implicit */long long int) var_8)))) % (((/* implicit */long long int) (+(((/* implicit */int) var_7))))))))))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                {
                    arr_32 [i_9] [i_8] [8] [21LL] = ((/* implicit */unsigned short) (((+(arr_10 [i_0] [(unsigned short)16] [(unsigned short)21]))) / (((/* implicit */unsigned int) min((var_5), (((/* implicit */int) arr_25 [i_0] [i_8])))))));
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((arr_27 [i_0] [i_8]) % (arr_0 [i_9]))) < (((/* implicit */long long int) arr_18 [i_0] [i_8] [i_9])))))));
                }
            } 
        } 
        arr_33 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32383))) : (arr_27 [i_0] [i_0])))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [20LL])))))))) & (((/* implicit */long long int) ((/* implicit */int) ((((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22212))))) <= (((/* implicit */long long int) 0U))))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_28 -= ((/* implicit */unsigned char) var_1);
        arr_38 [i_10] [i_10] = ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)42)))), (((/* implicit */int) arr_26 [3] [i_10] [(_Bool)0]))))));
    }
}
