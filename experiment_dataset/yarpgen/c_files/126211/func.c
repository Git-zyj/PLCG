/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126211
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) arr_2 [i_0]);
                            var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [12ULL] [i_1] [i_2] [i_0]))) | (629254664U)));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0]))));
                arr_11 [i_0] [i_0] = ((/* implicit */_Bool) 1023);
            }
        } 
    } 
    var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 108086391056891904ULL)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (short)27159))));
    /* LoopNest 3 */
    for (short i_4 = 2; i_4 < 18; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                {
                    arr_20 [i_5] [i_5] [i_5] = ((/* implicit */int) var_1);
                    arr_21 [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) ((int) (-(((/* implicit */int) var_3)))))), (var_6)));
                    var_18 = ((/* implicit */_Bool) (-(min((arr_13 [i_4 + 1] [(short)0]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)176))))))));
                    var_19 = ((/* implicit */unsigned int) arr_14 [i_6]);
                    var_20 = ((/* implicit */_Bool) ((1493482871U) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((int) (signed char)115)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) (+(11803663638154242580ULL)));
    var_22 = ((/* implicit */unsigned short) ((short) var_5));
}
