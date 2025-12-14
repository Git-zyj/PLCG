/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108870
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (max((((/* implicit */unsigned long long int) ((unsigned char) var_15))), (min((var_14), (((/* implicit */unsigned long long int) (unsigned char)144)))))) : ((+((-(2768386854884062998ULL)))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((9214205150192352027ULL), (13705611508404615824ULL)))) ? (18223468469655880801ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (unsigned char)120)))))))) || (((/* implicit */_Bool) 20276131242454425ULL))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9232538923517199589ULL)) ? (((/* implicit */unsigned long long int) var_15)) : ((~(min((((/* implicit */unsigned long long int) (unsigned char)42)), (17044515604796143173ULL)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min(((+(arr_0 [i_0 - 1]))), (((/* implicit */unsigned long long int) max((arr_1 [i_0 - 2]), ((short)0))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 15876444223504379765ULL))));
                var_22 = ((/* implicit */_Bool) 15876444223504379765ULL);
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((~(var_7))), (((/* implicit */long long int) ((_Bool) arr_2 [i_2]))))))));
                var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)187)), (-1370982852843424476LL)))) ? (((/* implicit */int) (unsigned char)26)) : (((((/* implicit */_Bool) -1370982852843424476LL)) ? (((/* implicit */int) (short)31267)) : (((/* implicit */int) (unsigned char)154))))))));
            }
        } 
    } 
}
