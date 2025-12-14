/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17970
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
    var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)19725))))) | (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_1)) * (var_3))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((954213925) != (((/* implicit */int) (_Bool)0))))))))) : (((/* implicit */int) ((short) ((((/* implicit */int) var_13)) ^ (var_1)))))));
    var_19 = ((/* implicit */short) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(((/* implicit */int) (short)(-32767 - 1))))) : ((+(((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */_Bool) 5833455427781156428ULL)) || (((/* implicit */_Bool) arr_2 [i_0]))))));
            arr_8 [22ULL] [i_0] [i_1] = ((/* implicit */unsigned short) arr_2 [(_Bool)1]);
        }
        arr_9 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -4613501526394721882LL))));
        arr_10 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) (((~(5765589945304180089ULL))) << (((((((/* implicit */_Bool) -954213924)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))) - (11580716115026999475ULL)))));
                    var_22 *= (~(arr_7 [i_0] [22LL]));
                    var_23 *= ((/* implicit */short) 8452617976222190818LL);
                    var_24 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (17419730122009173537ULL) : (((/* implicit */unsigned long long int) (-(-584631423))))));
                }
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        arr_20 [i_4] = ((/* implicit */short) max(((+(arr_16 [i_4] [i_4] [(unsigned short)2] [i_4]))), (((/* implicit */unsigned long long int) (!(((-954213926) <= (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 3 */
        for (short i_5 = 4; i_5 < 14; i_5 += 1) 
        {
            for (unsigned short i_6 = 3; i_6 < 12; i_6 += 3) 
            {
                for (unsigned short i_7 = 2; i_7 < 14; i_7 += 4) 
                {
                    {
                        arr_30 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_5] [i_5])), (arr_18 [i_5] [(_Bool)1])))))))));
                        arr_31 [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) (+(((((((/* implicit */int) arr_19 [i_4])) >= (((/* implicit */int) (unsigned short)50078)))) ? (1877989864) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        arr_32 [i_4] = ((/* implicit */int) (~(((var_3) >> (((954213934) - (954213920)))))));
    }
    var_25 = ((/* implicit */short) -4613501526394721882LL);
}
