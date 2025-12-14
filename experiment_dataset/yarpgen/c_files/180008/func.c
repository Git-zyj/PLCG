/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180008
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) min((-4961014573124361661LL), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_8), (903005447U)))) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_17 = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) 7675930993608345250ULL)) ? (10770813080101206378ULL) : (7675930993608345250ULL))))), (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_1 [i_0]))))))))));
        var_18 = ((/* implicit */unsigned char) ((_Bool) arr_1 [i_0]));
        arr_2 [16] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((_Bool) 1712226229684941405LL)))))));
        var_19 = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned short)14813)) % (((/* implicit */int) ((unsigned char) var_2)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) arr_1 [i_1]);
            var_21 ^= ((/* implicit */unsigned int) ((arr_6 [i_1 + 2]) ? (((/* implicit */long long int) arr_4 [i_1 + 3])) : (((((/* implicit */_Bool) 10770813080101206366ULL)) ? (var_11) : (var_11)))));
        }
        arr_7 [i_1] = ((/* implicit */_Bool) ((long long int) ((((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (short)-3098))))) / (max((-3999065769128484995LL), (((/* implicit */long long int) arr_1 [i_1 + 3])))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 13; i_4 += 3) 
            {
                {
                    var_22 ^= ((/* implicit */int) ((_Bool) var_4));
                    var_23 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)50719), ((unsigned short)50723)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))), (arr_8 [i_3])));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) (short)-1);
            var_25 = ((/* implicit */long long int) var_8);
        }
        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 1; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)50722)) & (((/* implicit */int) (short)0))))));
                        arr_24 [i_7] [i_7] [i_7] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)50723))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)50721)) ? (18278263631145978874ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14815)))))))))))));
            arr_25 [i_1 + 1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 35184372088831ULL)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_16 [i_1 + 3] [i_1 + 3]))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8336)) | (((/* implicit */int) (_Bool)1))))), (((unsigned long long int) arr_21 [i_1] [14] [i_1]))))));
        }
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_6))));
    }
    var_29 = ((/* implicit */_Bool) (unsigned short)50721);
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */int) ((signed char) ((unsigned long long int) var_10)))) : (((/* implicit */int) ((unsigned char) 16310149974030434154ULL)))));
}
