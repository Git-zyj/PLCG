/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142624
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = (unsigned short)36373;
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) 5490652346877816603LL))));
        var_14 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36373))) / (((((5490652346877816603LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)960))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51450)) && (((/* implicit */_Bool) 9223372036854775807LL))))))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (unsigned char)254))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29162)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52366)) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)512))) == (5490652346877816611LL))))))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)29162)) >> (((((/* implicit */int) ((1099511496704ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29137)))))) + (((((/* implicit */int) (unsigned short)15360)) / (((/* implicit */int) (unsigned short)50175))))))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)12)) - (((/* implicit */int) (unsigned char)110))));
    var_19 = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-30355))) ^ (1402663137847358735LL)))) * (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65280)) | (((/* implicit */int) (unsigned char)36))))) & (((4250999002713632841ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))))))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 21; i_4 += 2) 
            {
                {
                    arr_13 [(unsigned char)8] [i_3 + 2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((8411041076444483192LL) <= (2251799813684736LL)))) * (((/* implicit */int) ((((2251799813684723LL) % (-6393003021631126554LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17183))) == (32505856U))))))))));
                    var_20 = ((/* implicit */unsigned int) (short)-32260);
                    arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((-6393003021631126554LL) >= (-8519264110828253223LL)))) != (((/* implicit */int) (unsigned short)10720))));
                }
            } 
        } 
    } 
}
