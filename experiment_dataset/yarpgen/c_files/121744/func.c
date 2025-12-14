/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121744
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
    var_20 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (!(var_6))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) (((~(-1135893298))) >> (((((((/* implicit */int) (short)-32751)) ^ (arr_0 [i_1]))) - (1161563723)))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */int) (short)-8935)) % ((~(((/* implicit */int) (short)20833)))))) <= (((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_3 [i_0])))))))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [(_Bool)1] [(_Bool)1] [(_Bool)1]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))) != ((+(arr_4 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (var_10))) << (((((var_1) - ((+(var_14))))) + (4402704091271635168LL)))));
    var_25 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned char) (+((+(arr_8 [i_2])))));
                var_27 = ((/* implicit */long long int) (-((((+(var_10))) / (((/* implicit */unsigned int) (+(234915358))))))));
                var_28 = (i_3 % 2 == 0) ? (((/* implicit */signed char) ((((((arr_10 [i_2] [i_3] [i_3]) + (2147483647))) >> (((arr_10 [i_2] [i_2] [i_3]) + (459282021))))) + ((-(((/* implicit */int) (short)-13695))))))) : (((/* implicit */signed char) ((((((((arr_10 [i_2] [i_3] [i_3]) - (2147483647))) + (2147483647))) >> (((((arr_10 [i_2] [i_2] [i_3]) + (459282021))) - (1192724633))))) + ((-(((/* implicit */int) (short)-13695)))))));
            }
        } 
    } 
}
