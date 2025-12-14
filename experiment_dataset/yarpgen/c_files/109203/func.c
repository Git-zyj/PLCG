/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109203
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (short)20463)), (((long long int) ((((/* implicit */int) (unsigned short)11003)) / (((/* implicit */int) var_5)))))));
        arr_3 [i_0] [(signed char)17] &= ((/* implicit */unsigned short) ((long long int) (unsigned short)54506));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10998)) * (((/* implicit */int) ((short) (signed char)-1)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)192))) <= (398569753679987614ULL)))));
        arr_5 [i_0] = ((/* implicit */short) (-(((max((15038901898640607727ULL), (((/* implicit */unsigned long long int) (short)0)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29096))) & ((~(398569753679987608ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26180)) * (((/* implicit */int) (short)16))))) ^ (11563727340128894481ULL))))));
    var_14 += ((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)250)), ((unsigned short)17950)));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (min(((short)6309), (((/* implicit */short) (_Bool)0))))));
                arr_12 [(short)0] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)10), (((/* implicit */unsigned short) (signed char)-8)))))) * (((unsigned long long int) (short)-11)));
                arr_13 [i_2] = ((/* implicit */unsigned long long int) (+(-5655154238958384826LL)));
                var_16 = ((/* implicit */short) var_6);
            }
        } 
    } 
    var_17 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), ((short)-12028))))) & (((min((1215946790523791302ULL), (((/* implicit */unsigned long long int) (unsigned short)31025)))) | (var_10)))));
}
