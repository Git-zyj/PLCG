/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165056
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_16 &= ((/* implicit */signed char) ((short) min((-580453358), (((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) (short)-32755);
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0] [(unsigned short)8]))));
    }
    var_18 = ((/* implicit */unsigned short) (short)32728);
    var_19 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            {
                var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)-32755), ((short)-32759)))) ? (((/* implicit */unsigned int) (((+(((/* implicit */int) (short)32738)))) ^ (((/* implicit */int) max((arr_5 [i_1]), (var_8))))))) : (((((((/* implicit */_Bool) (unsigned char)25)) ? (arr_7 [i_1 + 2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_2]))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32738)) : (((/* implicit */int) (short)32738)))))))));
                var_21 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) arr_7 [i_1 + 1] [i_1 + 1]))), (min((((/* implicit */int) (short)32738)), (9267014)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_2])) ? (arr_7 [i_1] [(signed char)14]) : (arr_6 [i_2] [i_2] [i_1 + 1])))) ? (arr_6 [i_1 + 2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1])))))));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) max(((unsigned char)7), (((/* implicit */unsigned char) arr_4 [i_1 + 2] [i_1 + 2]))))) & (((-9267039) ^ (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])))))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_23 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-32737)) >= (((((/* implicit */int) (unsigned char)13)) | (((/* implicit */int) arr_11 [(unsigned char)15] [i_2] [(unsigned short)3])))))) ? (((((/* implicit */_Bool) arr_7 [i_3] [(unsigned char)14])) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 2] [4])) : (((/* implicit */int) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) arr_8 [i_2]))))))) : ((((+(((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_4])))) | ((+(((/* implicit */int) (short)32760))))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) arr_11 [i_1 + 2] [i_1 + 1] [i_1 - 1])))) : (((/* implicit */int) ((((((/* implicit */int) (unsigned short)21838)) << (((((/* implicit */int) (short)32765)) - (32756))))) < (((/* implicit */int) var_15)))))));
                            var_25 += ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1] [i_1])))), (((((((/* implicit */int) (short)32738)) | (108456461))) | (((((/* implicit */int) (signed char)-83)) ^ (((/* implicit */int) var_6))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
