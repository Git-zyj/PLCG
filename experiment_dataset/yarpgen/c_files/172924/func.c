/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172924
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_7)) : (var_8)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16))));
    var_21 = ((/* implicit */signed char) min((var_21), (var_5)));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((((((/* implicit */int) var_6)) << (((((/* implicit */int) var_5)) + (108))))) << (((((int) var_11)) - (2145975727))))), (((/* implicit */int) min((((unsigned short) -5859382714947549543LL)), (((/* implicit */unsigned short) var_2))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((2147483647) % (((/* implicit */int) (signed char)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)103))) + (5859382714947549559LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (~(min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0]))))))));
                arr_5 [i_1] [12ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (arr_0 [i_0] [(unsigned short)2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)103), ((unsigned char)175))))) : (arr_2 [i_0] [i_0] [i_1])))) || (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)103)) + (((/* implicit */int) (unsigned char)103))))) || (((arr_2 [i_0] [i_0] [i_1]) < (arr_2 [3LL] [i_1] [i_0])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_4)) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2126569140U)) ? (((/* implicit */int) (unsigned short)14385)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_17)))) : (((long long int) var_11))))));
}
