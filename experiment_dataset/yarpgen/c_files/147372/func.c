/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147372
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)223)) ? (7168U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49)))))) % (((((/* implicit */_Bool) (signed char)-61)) ? (16555342745837595668ULL) : (((/* implicit */unsigned long long int) 4294967295U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6771632879926598570ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)61103))))) ? (((((/* implicit */_Bool) 2582475097192069836ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)20875)))) : (((((/* implicit */int) (unsigned short)44198)) ^ (((/* implicit */int) (unsigned char)255))))))) : (((((/* implicit */_Bool) (-(6838598580416010108ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (signed char)-59))))) : (min((((/* implicit */unsigned long long int) (signed char)-48)), (11675111193782953042ULL)))))));
    var_19 = ((/* implicit */signed char) min((var_19), (var_3)));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) 6771632879926598570ULL);
        var_21 = ((/* implicit */unsigned long long int) 280798321);
        arr_2 [(signed char)4] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)161)) + (max((((/* implicit */int) max(((short)1024), (((/* implicit */short) (unsigned char)235))))), (((((/* implicit */_Bool) (unsigned short)28805)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (signed char)-76))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)29)) << (((((/* implicit */int) (unsigned short)20875)) - (20856)))))) ? (((((/* implicit */_Bool) -5250880461510646638LL)) ? (9214364837600034816ULL) : (9214364837600034791ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77)))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((600538695U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) 10435892701292069135ULL)) ? (9232379236109516800ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 600538695U)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (unsigned char)106))))))))));
                        var_24 = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)-60));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) min(((unsigned short)64009), ((unsigned short)20875))))))), (min((((/* implicit */long long int) max(((unsigned char)5), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */_Bool) (signed char)117)) ? (9170845184427322858LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)96)))))))));
}
