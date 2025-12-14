/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107698
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (short)-5375)) : (((/* implicit */int) (short)-5401)))) * (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)5412)) : (((/* implicit */int) (short)-5414))))))))))));
                var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((-7007823424626022050LL) < (((/* implicit */long long int) arr_1 [(signed char)13] [i_0])))) ? (262143) : ((-(arr_1 [i_0] [i_0])))))) ? ((-(511LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-5401)))))))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */_Bool) (short)-5375);
    var_22 = ((/* implicit */int) ((signed char) (_Bool)1));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            {
                arr_11 [i_2] [19] = ((/* implicit */int) ((((arr_6 [i_3]) ? (((/* implicit */int) arr_6 [i_2])) : (arr_5 [i_2]))) < (((((((/* implicit */int) (short)-5408)) % (((/* implicit */int) (_Bool)1)))) ^ ((+(((/* implicit */int) arr_10 [i_2] [i_2]))))))));
                var_23 ^= ((/* implicit */signed char) arr_8 [i_2] [i_3] [i_3]);
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)78)))) ? (((int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_9 [(signed char)0]) : (((/* implicit */int) arr_10 [i_2] [i_2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2]))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (short)-5394)))) : (((/* implicit */int) (short)-5359))))));
                var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((signed char) -526647069543151080LL))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5374)))) : (((arr_6 [i_2]) ? (arr_5 [i_2]) : (arr_5 [i_2])))))));
            }
        } 
    } 
}
