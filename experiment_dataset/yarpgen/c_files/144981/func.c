/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144981
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (short)-1)), (15331258705572690770ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)138)) || (((/* implicit */_Bool) (short)0))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(unsigned short)16])) || (arr_5 [(short)18] [2ULL] [i_3 + 1])))) & (((((/* implicit */int) arr_5 [i_2 - 1] [6ULL] [i_2 + 2])) * (arr_10 [i_0] [i_1] [16ULL]))))) % (((((/* implicit */int) arr_1 [i_3 - 1] [i_2 + 1])) | (((/* implicit */int) arr_1 [i_3 + 1] [i_2 - 1]))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                            {
                                var_15 &= ((/* implicit */short) min((arr_5 [8ULL] [5LL] [i_1]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [4])) ? (((/* implicit */unsigned long long int) arr_10 [(short)12] [i_1] [i_1])) : (arr_7 [i_3] [i_2])))) || (((/* implicit */_Bool) max((((/* implicit */short) var_12)), ((short)-1))))))));
                                var_16 = ((/* implicit */signed char) ((((unsigned long long int) arr_8 [10U] [12ULL] [i_2 + 2])) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) var_10)))) : ((-(((/* implicit */int) (unsigned short)6731)))))))));
                                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)1)) | (((/* implicit */int) (short)8128)))) * ((+(((/* implicit */int) arr_9 [(unsigned short)4] [(_Bool)1] [i_4] [(_Bool)1] [7]))))));
                                var_18 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((2147483647) | (((/* implicit */int) arr_4 [i_0] [(short)18]))))), ((~(var_8))))) >> ((((+(arr_10 [i_1] [7ULL] [i_4]))) - (1810180552)))));
                            }
                            arr_13 [(unsigned short)19] [i_3 - 1] [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(max((((0) - (((/* implicit */int) var_9)))), (((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) arr_1 [i_2] [11ULL]))))))));
                            arr_14 [i_0] [18ULL] [i_3] [6ULL] [(signed char)8] [i_0] = ((/* implicit */long long int) (-((+(2147483647)))));
                            var_19 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0] [i_1]))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */int) arr_5 [i_0] [(signed char)19] [i_0])) % (((/* implicit */int) arr_9 [11] [7LL] [14U] [18ULL] [i_1])))), ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))) == (((/* implicit */int) max((((/* implicit */unsigned short) (short)-8129)), ((unsigned short)15))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_10);
}
