/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121267
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_18 |= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))));
            var_19 ^= ((/* implicit */long long int) var_8);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)126)) ^ (((/* implicit */int) (_Bool)1))));
                        arr_14 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) min(((((~(((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned char)194))));
                    }
                } 
            } 
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)62464)) | (((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_24 [i_4] = ((/* implicit */unsigned short) var_15);
                        var_22 = ((/* implicit */short) (unsigned short)62446);
                    }
                } 
            } 
            arr_25 [(unsigned short)11] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
            var_23 *= ((/* implicit */signed char) (+(max((max((((/* implicit */long long int) (signed char)13)), (-6116131881826550195LL))), (((/* implicit */long long int) (_Bool)1))))));
        }
        arr_26 [(signed char)15] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_16))));
        arr_27 [i_0] = ((/* implicit */int) var_5);
        var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))));
    }
    var_25 = ((/* implicit */_Bool) var_13);
    var_26 = ((/* implicit */_Bool) max((var_26), ((!(((/* implicit */_Bool) 6770224078949936516LL))))));
    var_27 += ((/* implicit */_Bool) ((long long int) -627209385776688451LL));
}
