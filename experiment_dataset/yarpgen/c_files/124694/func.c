/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124694
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
    var_10 = ((/* implicit */unsigned char) (short)-28592);
    var_11 = ((/* implicit */unsigned int) -1715233480);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((signed char) (unsigned short)46579)))) ? ((((+(arr_2 [i_1] [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65418)) == (-263243597))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_12 = ((/* implicit */short) ((long long int) max((min(((short)-18423), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (!(((/* implicit */_Bool) 16999963071103746924ULL))))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)29859))) & (((((/* implicit */unsigned int) 2104108762)) | (arr_1 [i_0]))))) | (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (short)18423))) << (((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)44)))) - (40))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    arr_13 [i_0] [(unsigned char)12] [i_0] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [i_1] [i_3])))));
                    arr_14 [i_3] [(unsigned short)10] [i_1] [(short)9] = ((/* implicit */unsigned int) (+(3200399799757953948LL)));
                    var_13 = ((/* implicit */int) ((long long int) arr_2 [i_0] [i_0]));
                }
            }
        } 
    } 
}
